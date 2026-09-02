#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw string("Error: Division by zero is not allowed!");
        }
        double result =double(dividend) / divisor;
        cout << "Result: " << result << endl;
    } 
    catch (string e) {
        cout << e << endl;
    }

    return 0;
}

