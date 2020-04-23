#include "Tablet.h"

Tablet::Tablet(const string mod, const int num, const string scr) : Device(mod, num)
{
    setScreen(scr);
}

void Tablet::setScreen(const string scr)
{
    this->screen = scr;
}

string Tablet::getScreen() const
{
    return screen;
}

void Tablet::print() const
{
    cout << "Model - " << getModel();
    cout << ", Screen - " << getScreen();
    cout << ", Number - " <<getNumber() << endl;
}
