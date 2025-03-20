#ifndef DESKTOP_HPP
#define DESKTOP_HPP
#include <string>

class Desktop {
private:
    std::string monitor;
    std::string keyboard;
    std::string mouse;
    std::string speaker;
    std::string ram;
    std::string processor;
    std::string motherboard;
public:
    void setMonitor(std::string pMonitor);
    void setKeyboard(std::string pKeyboard);
    void setMouse(std::string pMouse);
    void setSpeaker(std::string pSpeaker);
    void setRam(std::string pRam);
    void setProcessor(std::string pProcessor);
    void setMotherboard(std::string pMotherboard);
    void showSpecs();
};
#endif