#include <iostream>
using namespace std;

class Number {
    float value;

public:
    Number(float v = 0) {
        value = v;
    }

    void getData() {
        cout << "Enter value: ";
        cin >> value;
    }

    Number operator * (Number n) {
        return Number(value * n.value);
    }

    void display() {
        cout << value;
    }
};

int main() {
    Number n1, n2, product;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "\nEnter second number:\n";
    n2.getData();

    product = n1 * n2;

    cout << "\nProduct: ";
    product.display();

    return 0;
}

