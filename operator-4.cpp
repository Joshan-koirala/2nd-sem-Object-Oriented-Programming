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

    Number operator / (Number n) {
        if (n.value == 0) {
            cout << "Error: Division by zero!" << endl;
            return Number(0);
        }
        return Number(value / n.value);
    }

    Number operator % (Number n) {
        if (n.value == 0) {
            cout << "Error: Modulo by zero!" << endl;
            return Number(0);
        }
        return Number(value % n.value);
    }

    void display() {
        cout << value;
    }
};

int main() {
    Number n1, n2, divResult, modResult;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "\nEnter second number:\n";
    n2.getData();

    divResult = n1 / n2;
    modResult = n1 % n2;

    cout << "\nDivision result: ";
    divResult.display();
    cout << "\nModulo result: ";
    modResult.display();

    return 0;
}

