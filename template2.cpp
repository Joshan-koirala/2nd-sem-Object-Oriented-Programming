#include <iostream>
#include <string>
using namespace std;

// Template function for single value
template <class T>
void display(T value) {
    cout << "Value: " << value << endl;
}

// Overloaded template function 
template <typename T1, typename T2>
void display(T1 value1, T2 value2) {
    cout << "Values: " << value1 << " , " << value2 << endl;
}

int main() {
    cout << "Enter an integer: ";
    int i;
    cin >> i;
    display(i);

    cout << "\nEnter a floating-point number: ";
    float f;
    cin >> f;
    display(f);

    cout << "\nEnter a character: ";
    char c;
    cin >> c;
    display(c);

    cout << "\n--- Now testing with two values ---\n";

    cout << "Enter an integer and a float: ";
    int i2;
    float f2;
    cin >> i2 >> f2;
    display(i2, f2);

    cout << "\nEnter a character and an integer: ";
    char c2;
    int i3;
    cin >> c2 >> i3;
    display(c2, i3);


    return 0;
}

