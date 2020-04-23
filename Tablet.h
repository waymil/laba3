#ifndef TABLET_H_INCLUDED
#define TABLET_H_INCLUDED

#include "Device.h"

class Tablet : public Device
{
    string screen;
public:
    Tablet(const string mod, const int num, const string scr);

    void print() const override;

    void setScreen(const string scr);
    string getScreen() const;
    using Device::operator=;
};

#endif // TABLET_H_INCLUDED
