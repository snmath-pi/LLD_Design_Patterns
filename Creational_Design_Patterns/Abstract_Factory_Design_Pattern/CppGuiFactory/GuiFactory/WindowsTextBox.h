#ifndef WINDOWS_TEXT_BOX_HPP
#define WINDOWS_TEXT_BOX_HPP
#include "ITextBox.h"

class WindowsTextBox: public ITextBox {
    void showText() {
        std::cout << "Windows TextBox " << std::endl;
    }
};
#endif