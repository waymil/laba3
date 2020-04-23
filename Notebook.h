#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

#include "Device.h"

class Notebook : public Device
{
    string cpu;
public:
    Notebook(const string mod, const int num, const string cpu);

    void print() const override;

    void setCPU(const string cpu);
    string getCPU() const;
    using Device::operator=;
};

#endif // NOTEBOOK_H_INCLUDED
