#ifndef IFACTORY_HPP
#define IFACTORY_HPP
#include "IButton.h"
#include "ITextBox.h"
class IFactory {
    public:
        virtual IButton* createButton() = 0;
        virtual ITextBox* createTextBox() = 0;
};
#endif