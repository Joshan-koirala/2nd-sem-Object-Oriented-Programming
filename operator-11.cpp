#include <iostream>
using namespace std;

class Fibonacci {
    int x, y;

public:
    Fibonacci() {
        x = 0;
        y = 1;
    }

    void operator++() {
        int next = x + y;
        x = y;
        y = next;
    }

    void display() {
        cout << y << " ";
    }
};

int main() {
    Fibonacci fib;
    int n;

    cout << "How many Fibonacci numbers to generate? ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        ++fib;
        fib.display();
    }
    cout << endl;

    return 0;
}

