#include "define.h"
#include "gui_multisig_read_sdcard_widgets.h"
#include "gui.h"
#include "gui_page.h"
#include "stdlib.h"
#include "gui_button.h"
#include "gui_import_multisig_wallet_info_widgets.h"
#include "gui_btc.h"
#include "gui_model.h"
#include "gui_hintbox.h"
#ifndef COMPILE_SIMULATOR
#include "drv_sdcard.h"
#include "user_fatfs.h"
#else
#include "simulator_mock_define.h"
#include "simulator_model.h"
#endif

#define FATFS_MAX_FILE_NUMBER                             (50)

static PageWidget_t *g_pageWidget;
static char *g_fileList[FATFS_MAX_FILE_NUMBER];

static void GuiContent(lv_obj_t *);
static void GuiSelectFileHandler(lv_event_t *e);
static FileFilterType g_fileFilterType = ALL;
static ViewType g_viewType;
static lv_obj_t *g_noticeWindow = NULL;

void GuiMultisigReadSdcardWidgetsInit(uint8_t fileFilterType)
{
    for (int i = 0; i < FATFS_MAX_FILE_NUMBER; i++) {
        g_fileList[i] = EXT_MALLOC(BUFFER_SIZE_128);
    }
    g_fileFilterType = fileFilterType;
    g_pageWidget = CreatePageWidget();
    GuiContent(g_pageWidget->contentZone);
    SetNavBarLeftBtn(g_pageWidget->navBarWidget, NVS_BAR_RETURN, CloseCurrentViewHandler, NULL);
    SetMidBtnLabel(g_pageWidget->navBarWidget, NVS_BAR_MID_LABEL, _("import_multi_wallet_via_micro_title"));
}
void GuiMultisigReadSdcardWidgetsDeInit()
{
    DestroyPageWidget(g_pageWidget);
    GUI_DEL_OBJ(g_noticeWindow)
    g_pageWidget = NULL;

    for (int i = 0; i < FATFS_MAX_FILE_NUMBER; i++) {
        if (g_fileList[i] != NULL) {
            EXT_FREE(g_fileList[i]);
            g_fileList[i] = NULL;
        }
    }
}

static void GuiContent(lv_obj_t *parent)
{
    GuiAddObjFlag(parent, LV_OBJ_FLAG_SCROLLABLE);
    ListMicroCardMultisigConfigFile();
}

static void GuiSelectFileHandler(lv_event_t *e)
{
    char *path = lv_event_get_user_data(e);

    switch (g_fileFilterType) {
    case ALL:
        break;
    case ONLY_TXT: {
        char *walletConfig = FatfsFileRead(path);
        uint32_t ret = GuiSetMultisigImportWalletDataBySDCard(walletConfig);
        switch (ret) {
        case Success:
            GuiFrameOpenView(&g_importMultisigWalletInfoView);
            break;
        case BitcoinMultiSigWalletNotMyWallet:
        case BitcoinMultiSigWalletParseError:
            g_noticeWindow = GuiCreateRustErrorWindow(ret, NULL, &g_noticeWindow, NULL);
            break;
        default:
            g_noticeWindow = GuiCreateErrorCodeWindow(ERR_INVALID_FILE, &g_noticeWindow, NULL);
            break;
        }
    }
    break;
    case ONLY_PSBT: {
        uint32_t readBytes = 0;
        uint8_t *psbtBytes = FatfsFileReadBytes(path, &readBytes);

        // for debug
        char *psbtStr = EXT_MALLOC(readBytes * 2 + 1);
        psbtStr[readBytes * 2] = 0;
        ByteArrayToHexStr(psbtBytes, readBytes, psbtStr);
        printf("psbt is %s\n", psbtStr);
        EXT_FREE(psbtStr);

        GuiSetPsbtStrData(psbtBytes, readBytes);
        g_viewType = BtcTx;
        GuiModelCheckTransaction(g_viewType);
    }
    break;
    case ONLY_JSON:

        break;
    default:
        break;
    }
}

void ListMicroCardMultisigConfigFile(void)
{
    lv_obj_t *parent = g_pageWidget->contentZone;
    lv_obj_clean(parent);
    uint32_t number = 0;
    char *suffix = NULL;
    char *notice = NULL;
    switch (g_fileFilterType) {
    case ALL:
        break;
    case ONLY_TXT:
        suffix = ".txt";
        notice = (char *)_("import_multi_wallet_info_no_config_file");
        break;
    case ONLY_PSBT:
        suffix = ".psbt";
        notice = (char *)_("multi_wallet_no_psbt_file");
        break;
    case ONLY_JSON:
        suffix = ".json";
        break;
    default:
        break;
    }
    printf("suffix is %s\r\n", suffix);
#ifdef COMPILE_SIMULATOR
    FatfsGetFileName("C:/assets/sd", g_fileList, BUFFER_SIZE_128, &number, suffix);
#else
    FatfsGetFileName("0:", g_fileList, BUFFER_SIZE_128, &number, suffix);
#endif
    if (number == 0) {
        lv_obj_t *img = GuiCreateImg(parent, &imgFile);
        lv_obj_align(img, LV_ALIGN_TOP_MID, 0, 128);
        lv_obj_t *label = GuiCreateTextLabel(parent, notice);
        lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 232);
        label = GuiCreateNoticeLabel(parent, _("multi_wallet_no_file_notice"));
        lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 284);
        lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);
        return;
    }

    for (int i = 0; i < number; i++) {
        char fileName[BUFFER_SIZE_32] = {0};
        CutAndFormatFileName(fileName, sizeof(fileName), g_fileList[i], suffix);
        lv_obj_t *btn = GuiCreateSelectButton(g_pageWidget->contentZone, fileName, &imgArrowRight, GuiSelectFileHandler, g_fileList[i], false);
        lv_obj_align(btn, LV_ALIGN_TOP_MID, 0, 84 * i);
    }
    lv_obj_t *label = GuiCreateNoticeLabel(g_pageWidget->contentZone, _("import_multi_wallet_file_limit_desc"));
    GuiAlignToPrevObj(label, LV_ALIGN_OUT_BOTTOM_LEFT, 20, 16);
    lv_obj_set_style_pad_bottom(label, 16, LV_PART_MAIN);
}

void GuiPSBtTransactionCheckPass(void)
{
    GuiModelTransactionCheckResultClear();
    GuiFrameOpenViewWithParam(&g_transactionDetailView, &g_viewType, sizeof(g_viewType));
}

void GuiPSBTTransactionCheckFaild(PtrT_TransactionCheckResult result)
{
    switch (result->error_code) {
    case BitcoinNoMyInputs:
    case BitcoinWalletTypeError:
        GuiCreateRustErrorWindow(result->error_code, result->error_message, NULL, NULL);
        break;
    default:
        g_noticeWindow = GuiCreateErrorCodeWindow(ERR_INVALID_FILE, &g_noticeWindow, NULL);
        break;
    }
    GuiModelTransactionCheckResultClear();
#if BTC_ONLY
    FreePsbtUxtoMemory();
#endif
}
