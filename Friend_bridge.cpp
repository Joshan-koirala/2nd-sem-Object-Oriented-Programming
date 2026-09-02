//WAP showing friend function as bridge between two class.

#include <iostream>
using namespace std;

class B;

class A {
private:
    int a;

public:
    A(int val) {
        a = val;
    }

    friend void showSum(A, B);
};

class B {
private:
    int b;

public:
    B(int val) {
        b = val;
    }

    friend void showSum(A, B);
};

void showSum(A objA, B objB) {
    cout << "Value of Class A: " << objA.a << endl;
    cout << "Value of Class B: " << objB.b << endl;
    cout << "Sum: " << objA.a + objB.b << endl;
}

int main() {
    A objA(10);
    B objB(20);
    showSum(objA, objB);
    return 0;
}

