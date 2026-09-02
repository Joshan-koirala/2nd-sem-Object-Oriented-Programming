#include <iostream>
using namespace std;

// Base class
class Numbers {
protected:
    int num1, num2;

public:
    void inputNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
};

// Derived class
class Sum : public Numbers {
public:
    void displaySum() {
        int sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Sum obj;
    obj.inputNumbers();  // Call base class function
    obj.displaySum();    // Call derived class function
    return 0;
}

