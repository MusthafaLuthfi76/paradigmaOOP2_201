#include <iostream>
using namespace std;

class orang {
public :
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "Orang Dibuat Dengan Umur" << umur << "\n" << endl;
    }
};

class pekerja : public orang {
public :

    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "Pekerja Dibuat\n" << endl;
    }
};

class pelajar : public orang {
public :

    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "Pelajar Dibuat\n" << endl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
