#include "Phone.h"

Phone::Phone(const string mod, const int num, const string os) : Device(mod, num)
{
    setOS(os);
}

void Phone::setOS(const string os)
{
    this->os = os;
}

string Phone::getOS() const
{
    return os;
}

void Phone::print() const
{
    cout << "Model - " << getModel();
    cout << ", OS - " << getOS();
    cout << ", Number - " <<getNumber() << endl;
}
