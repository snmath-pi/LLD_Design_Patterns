#ifndef DESKTOP_DIRECTOR_H
#define DESKTOP_DIRECTOR_H

#include "DesktopBuilder.h"

class DesktopDirector {
    private:
        DesktopBuilder* desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder* pdesktopBuilder) {
            desktopBuilder = pdesktopBuilder;
        }
        Desktop* getDesktop() {
            return desktopBuilder->getDesktop();
        }
        Desktop* buildDesktop() {
            desktopBuilder->buildMonitor();
            desktopBuilder->buildKeyboard();
            desktopBuilder->buildMouse();
            desktopBuilder->buildSpeaker();
            desktopBuilder->buildRam();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildMotherboard();
            return desktopBuilder->getDesktop();
        }
};
#endif