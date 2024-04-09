#include "gui.h"
#include "gui_views.h"
#include "gui_status_bar.h"
#include "gui_keyboard.h"
#include "gui_button.h"
#include "gui_hintbox.h"
#include "gui_model.h"
#include "user_memory.h"
#include "presetting.h"
#include "version.h"
#include "err_code.h"
#include "firmware_update.h"
#include "gui_page.h"
#include "gui_import_multisig_wallet_info_widgets.h"
#include "gui_multisig_wallet_export_widgets.h"
#include "librust_c.h"
#include "keystore.h"
#include "fingerprint_process.h"
#include "account_public_info.h"
#include "multi_sig_wallet_manager.h"
#include "gui_chain.h"
#include "stdint.h"
#include "user_memory.h"
#ifndef COMPILE_SIMULATOR
#include "drv_sdcard.h"
#include "user_fatfs.h"
#else
#include "simulator_mock_define.h"
#endif
#include <gui_keyboard_hintbox.h>

#define MAX_VERIFY_CODE_LEN 24

typedef enum {
    IMPORT_MULTI_SELECT_METHOD = 0,
    IMPORT_MULTI_SELECT_SDCARD_FILE,

    IMPORT_MULTI_BUTT,
} IMPORT_MULTI_ENUM;

typedef struct {
    uint8_t currentTile;
    lv_obj_t *tileView;
} ImportMultiInfoWidget_t;

static ImportMultiInfoWidget_t g_importMultiInfo;
static PageWidget_t *g_pageWidget;
static lv_obj_t *g_noticeWindow = NULL;
static MultiSigWallet *g_wallet = NULL;
static KeyboardWidget_t *g_keyboardWidget = NULL;
static lv_obj_t *g_confirmLabel;

static void GuiConfirmHandler(lv_event_t *e);
static void GuiVerifyPassword();
static void GuiOnFailedHandler(lv_event_t *e);
static void GuiShowWalletExisted();
static void GuiShowInvalidQRCode();
static void GuiShowInvalidWalletFile();
static void prepareWalletByQRCode(void *);
static void prepareWalletBySDCard(char *);
static void processResult(Ptr_Response_MultiSigWallet result);
static void GuiContent(lv_obj_t *);

static bool g_isQRCode = false;

void GuiSetMultisigImportWalletDataByQRCode(URParseResult *urResult, URParseMultiResult *multiResult, bool multi)
{
    g_isQRCode = true;
    prepareWalletByQRCode(multi ? multiResult->data : urResult->data);
    CHECK_FREE_UR_RESULT(urResult, false);
    CHECK_FREE_UR_RESULT(multiResult, true);
}

void GuiSetMultisigImportWalletDataBySDCard(char *walletConfig)
{
    g_isQRCode = false;
    prepareWalletBySDCard(walletConfig);
}

void GuiImportMultisigWalletInfoWidgetsInit(void)
{
    g_pageWidget = CreatePageWidget();
    if (g_wallet == NULL) {
        if (g_isQRCode) {
            GuiShowInvalidQRCode();
        } else {
            GuiShowInvalidWalletFile();
        }
        GuiCLoseCurrentWorkingView();
        return;
    }
    GuiContent(g_pageWidget->contentZone);
    SetMidBtnLabel(g_pageWidget->navBarWidget, NVS_BAR_MID_LABEL, _("import_multi_wallet_info_title"));
    SetNavBarLeftBtn(g_pageWidget->navBarWidget, NVS_BAR_RETURN, CloseCurrentViewHandler, NULL);
}

void GuiImportMultisigWalletInfoWidgetsDeInit()
{
    if (g_pageWidget != NULL) {
        DestroyPageWidget(g_pageWidget);
        g_pageWidget = NULL;
    }

    if (g_wallet != NULL) {
        free_MultiSigWallet(g_wallet);
        g_wallet = NULL;
    }

    ClearSecretCache();
}

void GuiImportMultisigWalletInfoWidgetsRestart()
{
}

void GuiImportMultisigWalletInfoVerifyPasswordSuccess(void)
{
    uint8_t seed[64] = {0};
    int len = GetMnemonicType() == MNEMONIC_TYPE_BIP39 ? sizeof(seed) : GetCurrentAccountEntropyLen();
    GetAccountSeed(GetCurrentAccountIndex(), seed, SecretCacheGetPassword());
    uint8_t mfp[4] = {0};
    GetMasterFingerPrint(mfp);
    Response_MultiSigWallet *response = parse_and_verify_multisig_config(seed, len, g_wallet->config_text, mfp, 4, MainNet);
    if (response->error_code != 0) {
        //TODO: throw error;
        printf("errorMessage: %s\r\n", response->error_message);
        GuiCLoseCurrentWorkingView();
        free_MultiSigWallet(response->data);
        return;
    }
    MultiSigWalletItem_t *wallet = AddMultisigWalletToCurrentAccount(g_wallet, SecretCacheGetPassword());
    if (wallet == NULL) {
        printf("multi sigwallet not found\n");
        return;
    }
    GuiDeleteKeyboardWidget(g_keyboardWidget);
    char *verifyCode = SRAM_MALLOC(MAX_VERIFY_CODE_LEN);
    strcpy_s(verifyCode, MAX_VERIFY_CODE_LEN, wallet->verifyCode);
    GuiCLoseCurrentWorkingView();
    GuiFrameOpenViewWithParam(&g_multisigWalletExportView, verifyCode, strnlen_s(verifyCode, MAX_VERIFY_CODE_LEN));
}

void GuiImportMultisigPasswordErrorCount(void *param)
{
    PasswordVerifyResult_t *passwordVerifyResult = (PasswordVerifyResult_t *)param;
    GuiShowErrorNumber(g_keyboardWidget, passwordVerifyResult);
}

static void prepareWalletByQRCode(void *wallet_info_data)
{
    uint8_t mfp[4];
    GetMasterFingerPrint(mfp);
    Ptr_Response_MultiSigWallet result = import_multi_sig_wallet_by_ur(wallet_info_data, mfp, 4, MainNet);
    processResult(result);
}

static void prepareWalletBySDCard(char *walletConfig)
{
    uint8_t mfp[4];
    GetMasterFingerPrint(mfp);
    Ptr_Response_MultiSigWallet result = import_multi_sig_wallet_by_file(walletConfig, mfp, 4, MainNet);
    processResult(result);
}

static void processResult(Ptr_Response_MultiSigWallet result)
{
    if (result->error_code != 0) {
        printf("%s\r\n", result->error_message);
        return;
    } else {
        g_wallet = result->data;
    }
}

static void GuiContent(lv_obj_t *parent)
{
    lv_obj_t *bgCont = GuiCreateContainerWithParent(parent, 480, 542);
    GuiAddObjFlag(bgCont, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_CLICKABLE);

    lv_obj_t *cont = GuiCreateContainerWithParent(bgCont, 408, 100);
    lv_obj_set_style_radius(cont, 24, LV_PART_MAIN);
    lv_obj_set_style_bg_color(cont, WHITE_COLOR_OPA12, LV_PART_MAIN);
    lv_obj_align(cont, LV_ALIGN_DEFAULT, 36, 0);

    lv_obj_t *label = GuiCreateNoticeLabel(cont, _("single_backup_namewallet_previnput"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 24, 16);
    label = GuiCreateIllustrateLabel(cont, g_wallet->name);
    lv_obj_align(label, LV_ALIGN_DEFAULT, 24, 54);

    cont = GuiCreateContainerWithParent(bgCont, 408, 62);
    lv_obj_set_style_radius(cont, 24, LV_PART_MAIN);
    lv_obj_set_style_bg_color(cont, WHITE_COLOR_OPA12, LV_PART_MAIN);
    lv_obj_align(cont, LV_ALIGN_DEFAULT, 36, 116);

    label = GuiCreateNoticeLabel(cont, _("Policy"));
    lv_obj_align(label, LV_ALIGN_LEFT_MID, 24, 0);
    char buff[8] = {0};
    label = GuiCreateIllustrateLabel(cont, g_wallet->policy);
    GuiAlignToPrevObj(label, LV_ALIGN_OUT_RIGHT_MID, 16, 0);

    cont = GuiCreateContainerWithParent(bgCont, 408, 62);
    lv_obj_set_style_radius(cont, 24, LV_PART_MAIN);
    lv_obj_set_style_bg_color(cont, WHITE_COLOR_OPA12, LV_PART_MAIN);
    lv_obj_align(cont, LV_ALIGN_DEFAULT, 36, 194);

    label = GuiCreateNoticeLabel(cont, _("sdcard_format_confirm"));
    lv_obj_align(label, LV_ALIGN_LEFT_MID, 24, 0);
    label = GuiCreateIllustrateLabel(cont, g_wallet->format);
    GuiAlignToPrevObj(label, LV_ALIGN_OUT_RIGHT_MID, 16, 0);

    cont = GuiCreateContainerWithParent(bgCont, 408, g_wallet->total * 220 - 16);
    lv_obj_set_style_radius(cont, 24, LV_PART_MAIN);
    lv_obj_set_style_bg_color(cont, WHITE_COLOR_OPA12, LV_PART_MAIN);
    lv_obj_align(cont, LV_ALIGN_DEFAULT, 36, 272);
    for (int i = 0; i < g_wallet->total; i++) {
        char buff[8] = {0};
        snprintf(buff, sizeof(buff), "%d/%d", i + 1, g_wallet->total);
        lv_obj_t *label = GuiCreateIllustrateLabel(cont, buff);
        lv_obj_align(label, LV_ALIGN_DEFAULT, 24, i * 204 + 16);
        lv_obj_set_style_text_color(label, ORANGE_COLOR, LV_PART_MAIN);

        label = GuiCreateNoticeLabel(cont, g_wallet->xpub_items->data[i].xfp);
        GuiAlignToPrevObj(label, LV_ALIGN_OUT_RIGHT_MID, 16, 0);
        label = GuiCreateIllustrateLabel(cont, g_wallet->xpub_items->data[i].xpub);
        lv_obj_align(label, LV_ALIGN_DEFAULT, 24, i * 204 + 50);
        lv_obj_set_width(label, 360);
        if (g_wallet->derivations->size == 1) {
            label = GuiCreateNoticeLabel(cont, g_wallet->derivations->data[0]);
        } else {
            label = GuiCreateNoticeLabel(cont, g_wallet->derivations->data[i]);
        }
        lv_obj_align(label, LV_ALIGN_DEFAULT, 24, i * 204 + 174);
    }
    bool isExport = GuiGetExportMultisigWalletSwitch();
    lv_obj_t *btn = GuiCreateBtn(parent, isExport ? _("Export") : _("Confirm"));
    lv_obj_add_event_cb(btn, GuiConfirmHandler, LV_EVENT_CLICKED, NULL);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, -24);
    lv_obj_set_size(btn, 408, 66);
    g_confirmLabel = lv_obj_get_child(btn, 0);
}

static void GuiConfirmHandler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        if (GuiGetExportMultisigWalletSwitch()) {
            char *verifyCode = SRAM_MALLOC(MAX_VERIFY_CODE_LEN);
            strcpy_s(verifyCode, MAX_VERIFY_CODE_LEN, g_wallet->verify_code);
            GuiCLoseCurrentWorkingView();
            GuiFrameOpenViewWithParam(&g_multisigWalletExportView, verifyCode, strnlen_s(verifyCode, MAX_VERIFY_CODE_LEN));
            return;
        }
        MultiSigWalletItem_t *wallet = GetMultisigWalletByVerifyCode(g_wallet->verify_code);
        if (wallet != NULL) {
            GuiShowWalletExisted();
            return;
        }
        GuiVerifyPassword();
    }
}

static void GuiVerifyPassword()
{
    g_keyboardWidget = GuiCreateKeyboardWidget(g_pageWidget->contentZone);
    SetKeyboardWidgetSelf(g_keyboardWidget, &g_keyboardWidget);
    static uint16_t sig = SIG_MULTISIG_WALLET_IMPORT_VERIFY_PASSWORD;
    SetKeyboardWidgetSig(g_keyboardWidget, &sig);
}

static void GuiShowInvalidQRCode()
{
    g_noticeWindow = GuiCreateHintBox(lv_scr_act(), 480, 356, false);
    lv_obj_t *img = GuiCreateImg(g_noticeWindow, &imgFailed);
    lv_obj_align(img, LV_ALIGN_DEFAULT, 38, 492);

    lv_obj_t *label = GuiCreateLittleTitleLabel(g_noticeWindow, _("scan_qr_code_error_invalid_qrcode"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 588);

    label = GuiCreateIllustrateLabel(g_noticeWindow, _("scan_qr_code_error_invalid_qrcode_desc"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 640);

    lv_obj_t *btn = GuiCreateBtnWithFont(g_noticeWindow, _("OK"), g_defTextFont);
    lv_obj_set_size(btn, 94, 66);
    lv_obj_set_style_bg_color(btn, WHITE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(btn, LV_OPA_20, LV_PART_MAIN);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_RIGHT, -16, -24);
    lv_obj_add_event_cb(btn, GuiOnFailedHandler, LV_EVENT_CLICKED, NULL);
}

static void GuiShowInvalidWalletFile()
{
    g_noticeWindow = GuiCreateHintBox(lv_scr_act(), 480, 356, false);
    lv_obj_t *img = GuiCreateImg(g_noticeWindow, &imgFailed);
    lv_obj_align(img, LV_ALIGN_DEFAULT, 38, 492);

    lv_obj_t *label = GuiCreateLittleTitleLabel(g_noticeWindow, _("scan_qr_code_error_invalid_wallet_file"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 588);

    label = GuiCreateIllustrateLabel(g_noticeWindow, _("scan_qr_code_error_invalid_wallet_file_desc"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 640);

    lv_obj_t *btn = GuiCreateBtnWithFont(g_noticeWindow, _("OK"), g_defTextFont);
    lv_obj_set_size(btn, 94, 66);
    lv_obj_set_style_bg_color(btn, WHITE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(btn, LV_OPA_20, LV_PART_MAIN);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_RIGHT, -16, -24);
    lv_obj_add_event_cb(btn, GuiOnFailedHandler, LV_EVENT_CLICKED, NULL);
}

static void GuiShowWalletExisted()
{
#define PLUS_PADDING +384
    g_noticeWindow = GuiCreateHintBox(lv_scr_act(), 480, 416, false);
    lv_obj_t *img = GuiCreateImg(g_noticeWindow, &imgFailed);
    lv_obj_align(img, LV_ALIGN_TOP_LEFT, 36, 48 PLUS_PADDING);

    lv_obj_t *label = GuiCreateLittleTitleLabel(g_noticeWindow, _("multisig_import_wallet_exist"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 144 PLUS_PADDING);

    label = GuiCreateIllustrateLabel(g_noticeWindow, _("multisig_import_wallet_exist_desc"));
    lv_obj_align(label, LV_ALIGN_DEFAULT, 36, 196 PLUS_PADDING);

    lv_obj_t *btn = GuiCreateBtnWithFont(g_noticeWindow, _("OK"), g_defTextFont);
    lv_obj_set_size(btn, 94, 66);
    lv_obj_set_style_bg_color(btn, WHITE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(btn, LV_OPA_20, LV_PART_MAIN);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_RIGHT, -16, -24);
    lv_obj_add_event_cb(btn, GuiOnFailedHandler, LV_EVENT_CLICKED, NULL);
}

static void GuiOnFailedHandler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        GUI_DEL_OBJ(g_noticeWindow);
        GuiCLoseCurrentWorkingView();
    }
}