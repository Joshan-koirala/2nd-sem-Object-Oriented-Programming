#include <iostream>
using namespace std;


template <typename T>
T findmax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // For int
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Max of " << i1 << " and " << i2 << " is: " << findmax(i1, i2) << endl;

    // For float
    float f1, f2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> f1 >> f2;
    cout << "Max of " << f1 << " and " << f2 << " is: " << findmax(f1, f2) << endl;

    // For char
    char c1, c2;
    cout << "\nEnter two characters: ";
    cin >> c1 >> c2;
    cout << "Max of '" << c1 << "' and '" << c2 << "' is: '" << findmax(c1, c2) << "'" << endl;

    return 0;
}

