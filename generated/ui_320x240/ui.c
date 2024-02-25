// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: T_Deck_Meshtastic

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_BootScreen
void ui_BootScreen_screen_init(void);
void ui_event_BootScreen(lv_event_t * e);
lv_obj_t * ui_BootScreen;
lv_obj_t * ui_FirmwareLabel;


// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
lv_obj_t * ui_MainScreen;
lv_obj_t * ui_ButtonPanel;
lv_obj_t * ui_HomeButton;
lv_obj_t * ui_NodesButton;
lv_obj_t * ui_GroupsButton;
lv_obj_t * ui_MessagesButton;
lv_obj_t * ui_MapButton;
lv_obj_t * ui_SettingsButton;
lv_obj_t * ui_HomePanel;
lv_obj_t * ui_HomeContainer;
lv_obj_t * ui_HomeMailButton;
lv_obj_t * ui_HomeMailLabel;
lv_obj_t * ui_HomeNodesButton;
lv_obj_t * ui_HomeNodesLabel;
lv_obj_t * ui_HomeLocationButton;
lv_obj_t * ui_HomeLocationLabel;
lv_obj_t * ui_HomeWLANButton;
lv_obj_t * ui_HomeWLANLabel;
lv_obj_t * ui_HomeBluetoothButton;
lv_obj_t * ui_HomeBluetoothLabel;
lv_obj_t * ui_NodesPanel;
lv_obj_t * ui_NodePanel2;
lv_obj_t * ui_NodeButton2;
lv_obj_t * ui_NodeImage2;
lv_obj_t * ui_UserNameLabel2;
lv_obj_t * ui_UserNameShortLabel2;
lv_obj_t * ui_BatteryLabel2;
lv_obj_t * ui_lastHeardLabel2;
lv_obj_t * ui_SignalLabel2;
lv_obj_t * ui_NodePanel3;
lv_obj_t * ui_NodeButton3;
lv_obj_t * ui_NodeImage3;
lv_obj_t * ui_UserNameLabel3;
lv_obj_t * ui_UserNameShortLabel3;
lv_obj_t * ui_NodePanel1;
lv_obj_t * ui_NodeButton1;
lv_obj_t * ui_NodeImage1;
lv_obj_t * ui_NodeLabel1;
lv_obj_t * ui_GroupsPanel;
lv_obj_t * ui_ChannelButton0;
lv_obj_t * ui_OpenLockImage;
lv_obj_t * ui_ChannelLabel0;
lv_obj_t * ui_ChannelButton1;
lv_obj_t * ui_OpenLockImage1;
lv_obj_t * ui_ChannelLabel1;
lv_obj_t * ui_ChannelButton2;
lv_obj_t * ui_ChannelLabel2;
lv_obj_t * ui_ChannelButton3;
lv_obj_t * ui_ChannelLabel3;
lv_obj_t * ui_ChannelButton4;
lv_obj_t * ui_ChannelLabel4;
lv_obj_t * ui_ChannelButton5;
lv_obj_t * ui_ChannelLabel5;
lv_obj_t * ui_ChannelButton6;
lv_obj_t * ui_ChannelLabel6;
lv_obj_t * ui_ChannelButton7;
lv_obj_t * ui_ChannelLabel7;
lv_obj_t * ui_MessagesPanel;
lv_obj_t * ui_MessagesContainer;
lv_obj_t * ui_msgHiddenPanel;
lv_obj_t * ui_TextMsgLabel;
lv_obj_t * ui_ownMsgHiddenPanel2;
lv_obj_t * ui_ownMessageTextLabel2;
lv_obj_t * ui_MessageInputArea;
void ui_event_KeyboardButton(lv_event_t * e);
lv_obj_t * ui_KeyboardButton;
lv_obj_t * ui_MapPanel;
lv_obj_t * ui_SettingsPanel;
lv_obj_t * ui_SettingsTabView;
lv_obj_t * ui_TabPageGeneral;
lv_obj_t * ui_GeneralLanguageButton;
lv_obj_t * ui_LanguageLabel;
lv_obj_t * ui_GeneralTimezoneButton;
lv_obj_t * ui_TimezoneLabel;
lv_obj_t * ui_GeneralScreenButton;
lv_obj_t * ui_ScreenLabel;
lv_obj_t * ui_GeneralMapsButton;
lv_obj_t * ui_MapsLabel;
lv_obj_t * ui_GeneralAudioButton;
lv_obj_t * ui_AudioLabel1;
lv_obj_t * ui_TabPageRadio;
lv_obj_t * ui_RadioBluetoothButton;
lv_obj_t * ui_BluetoothLabel;
lv_obj_t * ui_RadioDeviceButton;
lv_obj_t * ui_DeviceLabel;
lv_obj_t * ui_RadioDisplayButton;
lv_obj_t * ui_DisplayLabel;
lv_obj_t * ui_RadioLoRaButton;
lv_obj_t * ui_LoRaLabel;
lv_obj_t * ui_RadioNetworkButton;
lv_obj_t * ui_NetworkLabel;
lv_obj_t * ui_RadioPositionButton;
lv_obj_t * ui_PositionLabel;
lv_obj_t * ui_RadioPowerButton;
lv_obj_t * ui_PowerLabel;
lv_obj_t * ui_TabPageModules;
lv_obj_t * ui_ModuleCannedMsgButton;
lv_obj_t * ui_CannedMsgLabel;
lv_obj_t * ui_ModuleSaFButton;
lv_obj_t * ui_StoreAndForwardLabel;
lv_obj_t * ui_ModuleTelemetryButton;
lv_obj_t * ui_TelemetryLabel;
lv_obj_t * ui_ModuleMQTTButton;
lv_obj_t * ui_MQTTLabel;
lv_obj_t * ui_ModuleRangeTestButton;
lv_obj_t * ui_RangeTestLabel;
lv_obj_t * ui_ModuleAudioButton;
lv_obj_t * ui_AudioLabel;
lv_obj_t * ui_ModuleSerialButton;
lv_obj_t * ui_SerialLabel;
lv_obj_t * ui_ModuleExtNotificationButton;
lv_obj_t * ui_ExtNotificationLabel;
lv_obj_t * ui_ModuleNeighborInfoButton;
lv_obj_t * ui_NeighborInfoLabel;
lv_obj_t * ui_ModuleAmbientLightingButton;
lv_obj_t * ui_AmbientLightingLabel;
lv_obj_t * ui_ModuleDetectionSensorButton;
lv_obj_t * ui_DetectionSensorLabel;
lv_obj_t * ui_ModuleRemoteHardwareButton;
lv_obj_t * ui_RemoteHardwareLabel;
lv_obj_t * ui_BatteryPanel;
lv_obj_t * ui_BatteryImage;
lv_obj_t * ui_BatPercentageLabel;
lv_obj_t * ui_TopPanel;
lv_obj_t * ui_FrequencyLabel;
lv_obj_t * ui_RadioTowerImage;
lv_obj_t * ui_TopNodesPanel;
lv_obj_t * ui_TopNodesOnlineLabel;
lv_obj_t * ui_TopNodesImage;
lv_obj_t * ui_TopGroupsPanel;
lv_obj_t * ui_TopUserGroupLabel;
lv_obj_t * ui_TopGroupImage;
lv_obj_t * ui_TopGroupChatPanel;
lv_obj_t * ui_TopGroupChatLabel;
lv_obj_t * ui_TopGroupChatImage;
lv_obj_t * ui_TopMessagePanel;
lv_obj_t * ui_TopNodeLabel;
lv_obj_t * ui_TopMessageNodeImage;
lv_obj_t * ui_TopSettingsPanel;
lv_obj_t * ui_SettingsLabel;
lv_obj_t * ui_SettingsImage;
lv_obj_t * ui_TopMapPanel;
lv_obj_t * ui_MapLabel;
lv_obj_t * ui_MapImage;
lv_obj_t * ui_Keyboard;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_1222801488[1] = {&ui_img_356530738};
const lv_img_dsc_t * ui_imgset_2051279978[1] = {&ui_img_1002737466};
const lv_img_dsc_t * ui_imgset_262027734[1] = {&ui_img_15776284};
const lv_img_dsc_t * ui_imgset_978285355[1] = {&ui_img_1964124651};
const lv_img_dsc_t * ui_imgset_224919773[1] = {&ui_img_904314631};
const lv_img_dsc_t * ui_imgset_1012109507[1] = {&ui_img_1681326260};
const lv_img_dsc_t * ui_imgset_keyboard[1] = {&ui_img_dazzle_keyboard20_png};
const lv_img_dsc_t * ui_imgset_664930658[1] = {&ui_img_2090176585};
const lv_img_dsc_t * ui_imgset_931799549[1] = {&ui_img_1442270332};
const lv_img_dsc_t * ui_imgset_2021965211[1] = {&ui_img_80620004};
const lv_img_dsc_t * ui_imgset_1499648391[1] = {&ui_img_949915354};
const lv_img_dsc_t * ui_imgset_883731989[1] = {&ui_img_57207796};
const lv_img_dsc_t * ui_imgset_1675718514[2] = {&ui_img_1682375573, &ui_img_1184294011};
const lv_img_dsc_t * ui_imgset_262027691[4] = {&ui_img_830190229, &ui_img_476543179, &ui_img_408184321, &ui_img_979619928};
const lv_img_dsc_t * ui_imgset_1025971555[2] = {&ui_img_1583074341, &ui_img_1388253438};
const lv_img_dsc_t * ui_imgset_318823223[2] = {&ui_img_113284535, &ui_img_1969094876};
const lv_img_dsc_t * ui_imgset_1264820803[2] = {&ui_img_1889904893, &ui_img_1049473466};
const lv_img_dsc_t * ui_imgset_237229736[1] = {&ui_img_1390039103};
const lv_img_dsc_t * ui_imgset_627500912[1] = {&ui_img_1542354197};
const lv_img_dsc_t * ui_imgset_1203064690[1] = {&ui_img_279030151};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_BootScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 3000, &ui_MainScreen_screen_init);
    }
}
void ui_event_KeyboardButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_BootScreen_screen_init();
    ui_MainScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_BootScreen);
}