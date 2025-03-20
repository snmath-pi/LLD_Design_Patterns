#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include "DesktopBuilder.h"
class DellDesktopBuilder: public DesktopBuilder {
    public:
        void buildMonitor();
        void buildKeyboard();
        void buildMouse();
        void buildSpeaker();
        void buildRam();
        void buildProcessor();
        void buildMotherboard();

};
#endif