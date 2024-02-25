#ifdef VIEW_480x320

#include "TFTView_480x320.h"
#include <cstdio>
#include <ctime>
#include <functional>
#include "Arduino.h"
#include "ui.h" // this is the ui generated by lvgl / squareline editor

#ifdef USE_X11
#include "X11Driver.h"
#elif defined (LGFX_DRIVER_INC)
#include "LGFXDriver.h"
#include LGFX_DRIVER_INC
#else
#error "Unknown device for view 480x320"
#endif


TFTView_480x320* TFTView_480x320::gui = nullptr;

TFTView_480x320* TFTView_480x320::instance(void) {
    if (!gui) gui = new TFTView_480x320;
    return gui;
}


#ifdef USE_X11
TFTView_480x320::TFTView_480x320() : DeviceGUI(&X11Driver::create()) {
}
#else
TFTView_480x320::TFTView_480x320() : DeviceGUI(new LGFXDriver<LGFX_DRIVER>(screenWidth, screenHeight)) {
}
#endif


#endif