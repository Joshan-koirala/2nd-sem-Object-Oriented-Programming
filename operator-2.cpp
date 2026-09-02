#include <iostream>
using namespace std;

class com {
    float real, imag;

public:
    com(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    com operator + (com c) {
        return com(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
};

int main() {
    com c1, c2, sum;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    sum = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();
    cout << "\nSecond Complex Number: ";
    c2.display();
    cout << "\nSum: ";
    sum.display();

    return 0;
}

