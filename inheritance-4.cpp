#include <iostream>
#include <string>
using namespace std;

// Base class: Clock
class Clock {
protected:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    Clock() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Parameterized constructor
    Clock(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void showTime() {
        cout << "Time: "
             << hour << ":" 
             << minute << ":" 
             << second << endl;
    }
};

// Derived class: WallClock
class WallClock : public Clock {
private:
    string brand;
    string color;

public:
    // Default constructor
    WallClock() : Clock() {
        brand = "";
        color = "";
    }

    // Parameterized constructor
    WallClock(int h, int m, int s, string b, string c) 
        : Clock(h, m, s) {
        brand = b;
        color = c;
    }

    void showClock() {
        cout << "Wall Clock Details:\n";
        showTime();
        cout << "Brand: " << (brand.empty() ? "NULL" : brand) << endl;
        cout << "Color: " << (color.empty() ? "NULL" : color) << endl;
        cout << "-----------------------\n";
    }
};

// Main function
int main() {
    // Two wall clock objects initialized with 0/NULL
    WallClock clock1;
    WallClock clock2;

    cout << "--- 1st wall Clock ---\n";
    clock1.showClock();

    cout << "--- 2nd Clock---\n";
    clock2.showClock();

    return 0;
}

