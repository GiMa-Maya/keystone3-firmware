#include "gui.h"
#include "gui_views.h"
#include "gui_status_bar.h"
#include "gui_connect_wallet_widgets.h"
#include "gui_pending_hintbox.h"
#include "gui_lock_widgets.h"

int32_t GuiConnectWalletViewEventProcess(void* self, uint16_t usEvent, void* param, uint16_t usLen)
{
    GUI_ASSERT(g_connectWalletView.isActive);

    switch (usEvent) {
    case GUI_EVENT_OBJ_INIT:
        GuiConnectWalletInit();
        break;
    case GUI_EVENT_OBJ_DEINIT:
        GuiConnectWalletDeInit();
        break;
    case GUI_EVENT_REFRESH:
        GuiConnectWalletRefresh();
        break;
    case SIG_SETUP_VIEW_TILE_PREV:
        GuiConnectWalletPrevTile();
        break;
    case SIG_SETUP_VIEW_TILE_NEXT:
        GuiConnectWalletNextTile();
        break;
    case SIG_BACKGROUND_UR_GENERATE_SUCCESS:
        GuiConnectWalletHandleURGenerate((char*)param, usLen);
        break;
    case SIG_BACKGROUND_UR_UPDATE:
        GuiConnectWalletHandleURUpdate((char*)param, usLen);
        break;
#ifndef BTC_ONLY
    case SIG_SETUP_RSA_PRIVATE_KEY_CONNECT_CONFIRM:
        GuiConnectShowRsaSetupasswordHintbox();
        break;
    case SIG_SETUP_RSA_PRIVATE_KEY_RSA_VERIFY_PASSWORD_FAIL:
        if (param != NULL) {
            PasswordVerifyResult_t *passwordVerifyResult = (PasswordVerifyResult_t *)param;
            uint16_t sig = *(uint16_t *) passwordVerifyResult->signal;
            if (sig == SIG_LOCK_VIEW_SCREEN_GO_HOME_PASS) {
                GuiLockScreenPassCode(false);
                GuiConnectWalletPasswordErrorCount(param);
                return SUCCESS_CODE;
            }
        }
        GuiLockScreenPassCode(false);
        GuiConnectWalletPasswordErrorCount(param);
        break;
    case SIG_SETUP_RSA_PRIVATE_KEY_RSA_VERIFY_PASSWORD_PASS:
        printf("SIG_VERIFY_PASSWORD_PASS\n");
        if (param != NULL) {
            uint16_t sig = *(uint16_t *)param;
            if (sig == SIG_LOCK_VIEW_SCREEN_GO_HOME_PASS) {
                GuiLockScreenToHome();
                return SUCCESS_CODE;
            }
        }
        GuiPrepareArConnectWalletView();
        break;
    case SIG_SETUP_RSA_PRIVATE_KEY_GENERATE_ADDRESS:
        GuiUpdatePendingHintBoxSubtitle(_("GeneratingRsaAddress"));
        break;
#endif
    default:
        return ERR_GUI_UNHANDLED;
    }
    return SUCCESS_CODE;
}

GUI_VIEW g_connectWalletView = {
    .id = CONNECT_WALLET,
    .previous = NULL,
    .isActive = false,
    .optimization = false,
    .pEvtHandler = GuiConnectWalletViewEventProcess,
};

