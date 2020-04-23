#include "Notebook.h"

Notebook::Notebook(const string mod, const int num, const string cpu) : Device(mod, num)
{
    setCPU(cpu);
}

void Notebook::setCPU(const string cpu)
{
    this->cpu = cpu;
}

string Notebook::getCPU() const
{
    return cpu;
}

void Notebook::print() const
{
    cout << "Model - " << getModel();
    cout << ", CPU - " << getCPU();
    cout << ", Number - " <<getNumber() << endl;
}
