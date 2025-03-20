#include <iostream>
#include "DesktopDirector.h"
#include "DellDesktopBuilder.h"
#include "HpDesktopBuilder.h"


int main () {

    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* desktopDirector1 = new DesktopDirector(hpDesktopBuilder);
    Desktop* hpDesktop = desktopDirector1->buildDesktop();
    hpDesktop->showSpecs();

    DesktopDirector* desktopDirector2 = new DesktopDirector(dellDesktopBuilder);
    Desktop* dellDesktop = desktopDirector2->buildDesktop();
    dellDesktop->showSpecs();
    
    return 0;
}


