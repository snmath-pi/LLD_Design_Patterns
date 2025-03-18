#ifndef WINDOWS_FACTORY_HPP
#define WINDOWS_FACTORY_HPP
#include "IFactory.h"
#include "WindowsButton.h"
#include "WindowsTextBox.h"
class WindowsFactory: public IFactory {
    IButton* createButton() {
        return new WindowsButton();
    }
    ITextBox* createTextBox() {
        return new WindowsTextBox();
    }
};
#endif