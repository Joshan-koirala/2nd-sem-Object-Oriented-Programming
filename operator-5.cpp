#include <iostream>
using namespace std;

class Amount {
    int rs, ps;

public:
    void getData() {
        cout << "Enter rupees: ";
        cin >> rs;
        cout << "Enter paise: ";
        cin >> ps;
    }

    bool operator < (Amount a) {
        int total1 = rs * 100 + ps;
        int total2 = a.rs * 100 + a.ps;
        return total1 < total2;
    }

    void display() {
        cout << rs << " Rs " << ps << " Ps";
    }
};

int main() {
    Amount a1, a2;

    cout << "Enter first amount:\n";
    a1.getData();

    cout << "\nEnter second amount:\n";
    a2.getData();

    cout << "\nSmaller amount is: ";
    if (a1 < a2)
        a1.display();
    else if (a2 < a1)
        a2.display();
    else
        cout << "Both amounts are equal";

    return 0;
}


