#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    void getData() {
        cout << "Enter value: ";
        cin >> value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    friend Number operator + (const Number &n1, const Number &n2);
};

Number operator + (const Number &n1, const Number &n2) {
    return Number(n1.value + n2.value);
}

int main() {
    Number n1, n2, sum;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "\nEnter second number:\n";
    n2.getData();

    sum = n1 + n2;

    cout << "\nSum: ";
    sum.display();

    return 0;
}

