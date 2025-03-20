#ifndef IBUTTON_HPP
#define IBUTTON_HPP
#include <iostream>
class IButton {
    public:
        virtual void press() = 0;
};
#endif