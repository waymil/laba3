#include "Device.h"

Device::Device()
{
    model = "none";
    number = 0;
}

Device::Device(Device &two):Device(two.model, two.number){}

Device::Device(const string mod, const int num) : Device()
{
    setModel(mod);
    setNumber(num);
}

string Device::getModel() const
{
    return model;
}

int Device::getNumber() const
{
    return number;
}

void Device::setModel(const string mod)
{
    this->model = mod;
}

bool Device::setNumber(const int num)
{
    if(number < 0)
        return false;
    this->number = num;
    return true;
}

Device&Device::operator=(const Device &a)
{
    this->model = "none";
    this->number = 0;
    setModel(a.model);
    setNumber(a.number);
    return *this;
}
