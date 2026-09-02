#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor ." << endl;
    }
    ~Base() {
        cout << "Base class destructor ." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor." << endl;
    }
    ~Derived() {
        cout << "Derived class destructor ." << endl;
    }
};

int main() {
    cout << "---Creating object..." << endl;
    Derived obj;  // object creation
    cout << "---Object in use..." << endl;
    return 0; // object destruction happens here
}

