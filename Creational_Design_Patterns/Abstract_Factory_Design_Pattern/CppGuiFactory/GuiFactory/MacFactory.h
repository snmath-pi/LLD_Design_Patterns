#ifndef MAC_FACTORY_HPP
#define MAC_FACTORY_HPP
#include "IFactory.h"
#include "MacButton.h"
#include "MacTextBox.h"
class MacFactory: public IFactory {
    IButton* createButton() {
        return new MacButton();
    }
    ITextBox* createTextBox() {
        return new MacTextBox();
    }
};
#endif