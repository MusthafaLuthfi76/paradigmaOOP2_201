#include <iostream>
using namespace std;

class orang {
public :
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "Orang Dibuat Dengan Umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public orang {
public :

    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "Pekerja Dibuat\n" << endl;
    }
};

class pelajar : virtual public orang {
public :

    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "Pelajar Dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar {
public :

    budi(int pUmur) :
        pekerja(pUmur),
        pelajar(pUmur),
        orang(pUmur)            //Hal ini dapat digunakan jika menggunakan virtual
    {
        cout << "Budi Dibuat\n" << endl;
    }
};

int main()
{
    budi a(12);
    return 0;
}

