#ifndef WATCH_H_INCLUDED
#define WATCH_H_INCLUDED

#include "Device.h"

class Watch : public Device
{
    string duration;
public:
    Watch(const string mod, const int num, const string dur);

    void print() const override;

    void setDuration(const string dur);
    string getDuration() const;
    using Device::operator=;
};

#endif // WATCH_H_INCLUDED
