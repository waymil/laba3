#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED

#include "Device.h"

class Phone : public Device
{
    string os;
public:
    Phone(const string mod, const int num, const string os);

    void print() const override;

    void setOS(const string os);
    string getOS() const;
    using Device::operator=;
};

#endif // PHONE_H_INCLUDED
