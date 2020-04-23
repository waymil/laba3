#include "Device.h"
#include "Phone.h"
#include "Notebook.h"
#include "Tablet.h"
#include "Watch.h"

int main()
{
    Phone a("Samsung", 1123, "Android");
    Phone b("Apple", 1134, "iOS");
    Phone c("Xiaomi", 1145, "Android");
    Notebook d("Lenovo", 1235, "Intel");
    Notebook e("MSI", 1246, "Intel");
    Notebook f("Acer", 1257, "AMD");
    Tablet g("Apple", 1469, "2160");
    Tablet h("Samsung", 1459, "1920");
    Tablet i("Huawei", 1449, "1920");
    Watch j("Xiaomi", 1654, "45 days");
    Watch k("Samsung", 1643, "7 days");
    Watch l("Huawei", 1632, "14 days");

    cout << "Select an action:" << endl;
    cout << "1) Display database" << endl;
    cout << "2) Add new object" << endl;

    Device *obj;
    int sel1, sel2, num;
    string mod, oth;
    cin >> sel1;
    if (sel1 == 1)
    {
        a.print(); b.print(); c.print();
        d.print(); e.print(); f.print();
        g.print(); h.print(); i.print();
        j.print(); k.print(); l.print();
    }
    if (sel1 == 2)
    {
        cout << "Choose a device: 1)Smartphone, 2)Notebook, 3)Tablet, 4)Watch" << endl;
        cin >> sel2;
        cout << "|Enter information|:" << endl;
        cout << "Model - ";
        cin >> mod;
        cout << "Number - ";
        cin >> num;
        cout << "Other - ";
        cin >> oth;
        switch(sel2)
        {
            case 1:
                obj = new Phone(mod, num, oth);
                break;
            case 2:
                obj = new Notebook(mod, num, oth);
                break;
            case 3:
                obj = new Tablet(mod, num, oth);
                break;
            case 4:
                obj = new Watch(mod, num, oth);
                break;
        }
        if (obj)
            obj->print();
    }
    if ((sel1 != 1)&&(sel1 != 2))
        cout << "Error" << endl;
    return 0;
}
