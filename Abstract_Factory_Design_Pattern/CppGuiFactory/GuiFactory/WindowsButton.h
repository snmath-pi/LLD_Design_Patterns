#ifndef WINDOWS_BUTTON_HPP
#define WINDOWS_BUTTON_HPP
#include "IButton.h"

class WindowsButton: public IButton {
    void press() {
        std::cout << "Windows Button Pressed" << std::endl;
    }
};
#endif