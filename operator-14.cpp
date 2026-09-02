#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
    float celsius;

public:
    Celsius(float c = 0) {
        celsius = c;
    }

    void getData() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    float getCelsius() const {
        return celsius;
    }

    operator Fahrenheit();
};

class Fahrenheit {
    float fahrenheit;

public:
    Fahrenheit(float f = 0) {
        fahrenheit = f;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F\n";
    }
};

Celsius::operator Fahrenheit() {
    float f = (celsius * 9 / 5) + 32;
    return Fahrenheit(f);
}

int main() {
    Celsius c;
    c.getData();

    Fahrenheit f = c;

    f.display();

    return 0;
}

