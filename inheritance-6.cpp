#include <iostream>
using namespace std;

class Base {
private:
    int a; // private
protected:
    int b; // protected
public:
    int c; // public

    Base() {
        a = 1;
        b = 2;
        c = 3;
    }
};

// Public Inheritance
class DerivedPublic : public Base {
public:
    void show() {
        // a;  //  private not accessible
        cout << "Public Inheritance - b: " << b << "  c: " << c << endl;
    }
};

// Protected Inheritance
class DerivedProtected : protected Base {
public:
    void show() {
        cout << "Protected Inheritance - b: " << b << "  c: " << c << endl;
    }
};

// Private Inheritance
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "Private Inheritance - b: " << b << "  c: " << c << endl;
    }
};

int main() {
    DerivedPublic obj1;
    obj1.show();
    cout << "Access c from public obj1: " << obj1.c << endl;   //   Public in public inheritance

    DerivedProtected obj2;
    obj2.show();
    // cout << obj2.c; // Not accessible (became protected)

    DerivedPrivate obj3;
    obj3.show();
    // cout << obj3.c; // Not accessible (became private)

    return 0;
}

