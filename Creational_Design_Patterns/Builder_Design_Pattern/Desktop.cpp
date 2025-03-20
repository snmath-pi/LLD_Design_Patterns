#include "Desktop.h"
#include <iostream>


void Desktop::setMonitor(std::string pMonitor) {
    monitor = pMonitor;
}

void Desktop::setKeyboard(std::string pKeyboard) {
    keyboard= pKeyboard;
}


void Desktop::setMouse(std::string pMouse) {
    mouse = pMouse;
}


void Desktop::setSpeaker(std::string pSpeaker) {
    speaker = pSpeaker;
}


void Desktop::setRam(std::string pRam) {
    ram = pRam;
}

void Desktop::setProcessor(std::string pProcessor) {
    processor = pProcessor;
}


void Desktop::setMotherboard(std::string pMotherboard) {
    motherboard = pMotherboard;
}

void Desktop::showSpecs() {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Monitor: " << monitor << std::endl;
    std::cout << "Keyboard: " << keyboard << std::endl;
    std::cout << "Mouse: " << mouse << std::endl;
    std::cout << "Speaker: " << speaker << std::endl;
    std::cout << "Ram: " << ram << std::endl;
    std::cout << "Processor: " << processor << std::endl;
    std::cout << "Motherboard: " << motherboard << std::endl;
}