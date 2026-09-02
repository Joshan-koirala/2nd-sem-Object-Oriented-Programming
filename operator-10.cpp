#include <iostream>
using namespace std;

class Fibonacci {
    int prev, curr;

public:
    Fibonacci() {
        prev = 0;
        curr = 1;
    }

    // Overload prefix ++ operator to move to next Fibonacci number
    void operator++() {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    void display() {
        cout << curr << endl;
    }
};

int main() {
    Fibonacci fib;

    cout << "Fibonacci series:\n";

    for (int i = 0; i < 10; i++) {
        ++fib;
        fib.display();
    }

    return 0;
}

