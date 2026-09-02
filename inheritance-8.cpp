#include <iostream>
using namespace std;

// Base class 1
class Area {
protected:
    float length, breadth;
public:
    void getdata() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    float calcArea() {
        return length * breadth;
    }
};

// Base class 2
class Volume {
protected:
    float height;
public:
    void getdata() {
        cout << "Enter height: ";
        cin >> height;
    }
    float calcVolume(float l, float b) {
        return l * b * height;
    }
};

// Derived class
class Result : public Area, public Volume {
public:
    void display() {
        cout << "\nArea of rectangle: " << calcArea();
        cout << "\nVolume of cuboid: " << calcVolume(length, breadth);
    }
};

int main() {
    Result r;
    r.Area::getdata();   // call Area's getdata()
    r.Volume::getdata(); // call Volume's getdata()
    r.display();
    return 0;
}

