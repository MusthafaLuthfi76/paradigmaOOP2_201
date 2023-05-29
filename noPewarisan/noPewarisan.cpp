#include <iostream>
using namespace std;

class baseClass final {
public :
    virtual void perkenalan() {
        cout << "Halo saya Function dari Base Class";
    }
};

class derivedClass : public baseClass {
public :
    void perkenalan() {
        cout << "Halo Saya Function dari derived class";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}
