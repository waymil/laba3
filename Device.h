#ifndef DEVICE_H_INCLUDED
#define DEVICE_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Device
{
private:
    string model;
    int number;
protected:
    Device(const string mod, const int num);
public:
    Device();
    Device(Device &one);

    void setModel(const string mod);
    bool setNumber(const int num);
    string getModel() const;
    int getNumber() const;

    Device&operator=(const Device &a);

    virtual void print() const = 0;
};

#endif // DEVICE_H_INCLUDED
