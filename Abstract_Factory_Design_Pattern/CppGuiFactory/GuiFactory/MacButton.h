#ifndef MAC_BUTTON_HPP
#define MAC_BUTTON_HPP

#include "IButton.h"

class MacButton: public IButton {
    void press() {
        std::cout << "Mac Button Pressed" << std::endl;
    }
};

#endif