#ifndef MAC_TEXT_BOX_HPP
#define MAC_TEXT_BOX_HPP
#include "ITextBox.h"

class MacTextBox: public ITextBox {
    void showText() {
        std::cout << "Mac TextBox " << std::endl;
    }
};
#endif