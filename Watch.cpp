#include "Watch.h"

Watch::Watch(const string mod, const int num, const string dur) : Device(mod, num)
{
    setDuration(dur);
}

void Watch::setDuration(const string dur)
{
    this->duration = dur;
}

string Watch::getDuration() const
{
    return duration;
}

void Watch::print() const
{
    cout << "Model - " << getModel();
    cout << ", Duration - " << getDuration();
    cout << ", Number - " <<getNumber() << endl;
}
