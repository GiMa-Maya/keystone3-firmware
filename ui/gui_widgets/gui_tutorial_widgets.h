#ifndef _GUI_TUTORIAL_WIDGETS_H
#define _GUI_TUTORIAL_WIDGETS_H

typedef enum {
    TUTORIAL_SHAMIR_BACKUP,
    TUTORIAL_BTC_RECEIVE,
    TUTORIAL_ETH_RECEIVE,

    TUTORIAL_LIST_INDEX_BUTT,
} TUTORIAL_LIST_INDEX_ENUM;

void GuiTutorialInit(TUTORIAL_LIST_INDEX_ENUM);
void GuiTutorialRefresh();
void GuiTutorialDeInit();

#endif