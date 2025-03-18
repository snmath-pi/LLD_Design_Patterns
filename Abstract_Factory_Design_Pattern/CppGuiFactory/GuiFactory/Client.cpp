#include <iostream>
#include "GUIAbstractFactory.h"

int main () {
    std::cout << "Enter your machine Os: " << std::endl;
    std::string osType;
    std::cin >> osType;

    IFactory* factory =  GUIAbstractFactory::createFactory(osType);
    IButton* button = factory->createButton();
    button->press();
    ITextBox* textBox = factory->createTextBox();
    textBox->showText();

    return 0;
}