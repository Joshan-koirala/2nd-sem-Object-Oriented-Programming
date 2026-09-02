#include <iostream>
using namespace std;

class Kilogram {
    float kg;

public:
    Kilogram(float k = 0) {
        kg = k;
    }

    void getData() {
        cout << "Enter weight in kilograms: ";
        cin >> kg;
    }

    float getKg() {
        return kg;
    }
};

class Gram {
    float gm;

public:
    Gram() {
        gm = 0;
    }

    void display() {
        cout << "Weight in grams: " << gm << " gm" << endl;
    }

    Gram(Kilogram k) {
        gm = k.getKg() * 1000;
    }
};

int main() {
    Kilogram k;
    Gram g;

    k.getData();

    g = k;

    g.display();

    return 0;
}

