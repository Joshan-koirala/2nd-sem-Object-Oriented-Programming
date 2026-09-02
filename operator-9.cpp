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

    // Overload prefix ++ operator
    void operator++() {
        ++value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n;

    n.getData();

    ++n;  // Increment using overloaded ++

    cout << "After increment: "<<endl;
    n.display();

    return 0;
}

