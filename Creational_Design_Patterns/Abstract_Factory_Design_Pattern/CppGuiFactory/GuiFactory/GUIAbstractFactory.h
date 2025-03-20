#ifndef GUI_ABSTRACT_FACTORY_HPP
#define GUI_ABSTRACT_FACTORY_HPP
#include <iostream>
#include "WindowsFactory.h"
#include "MacFactory.h"
class GUIAbstractFactory {
    public:
        static IFactory* createFactory(std::string osType) {
            if(osType == "windows") {
                return new WindowsFactory();
            } else {
                return new MacFactory();
            }
        }
};
#endif