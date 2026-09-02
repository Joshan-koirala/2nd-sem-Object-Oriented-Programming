#include <iostream>
using namespace std;

// Class template
template <typename T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    T add() {
        return a + b;
    }
    T subtract() {
        return a - b;
    }
    T multiply() {
        return a * b;
    }
    T divide() {
        try {
            if (b == 0) {
                throw string("Error: Division by zero is not allowed!");
            }
            return a / b;
        }
        catch (string &e) {
            cout << e << endl;
            return 0; 
        }
    }
};

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    Calculator<int> intCalc(x, y);

    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    cout << "\nEnter two floats: ";
    float p, q;
    cin >> p >> q;
    Calculator<float> floatCalc(p, q);
    cout << "Addition: " << floatCalc.add() << endl;
    cout << "Subtraction: " << floatCalc.subtract() << endl;
    cout << "Multiplication: " << floatCalc.multiply() << endl;
    cout << "Division: " << floatCalc.divide() << endl;

    return 0;
}

