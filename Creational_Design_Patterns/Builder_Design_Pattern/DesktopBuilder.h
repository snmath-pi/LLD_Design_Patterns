#ifndef DESKTOP_BUILDER_HPP
#define DESKTOP_BUILDER_HPP

#include "Desktop.h"
class DesktopBuilder {
protected:
    Desktop* desktop;
public:
    DesktopBuilder() {
        desktop = new Desktop();
    }
    virtual void buildMonitor() = 0;
    virtual void buildKeyboard() = 0;
    virtual void buildMouse() = 0;
    virtual void buildSpeaker() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildMotherboard() = 0;
    virtual Desktop* getDesktop() {
        return desktop;
    }
};

#endif