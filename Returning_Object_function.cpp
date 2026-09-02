//32). WAP demonstrate returning an object to function by
//a). Value
//b). Reference
//c). Pointer

#include <iostream>
using namespace std;

class Sample {
    private:
        int data;

    public:
        Sample(int d = 0) {
            data = d;
        }

        void setData(int d) {
            data = d;
        }

        void show() {
            cout << "Data = " << data << endl;
            cout << "----------------------------" << endl;
        }

        int getData() {
            return data;
        }
};

// a) Return by Value
Sample returnByValue() {
    Sample obj(100);
    return obj;
}

// b) Return by Reference
Sample& returnByReference() {
    static Sample obj(200);
    return obj;
}

// c) Return by Pointer
Sample* returnByPointer() {
    static Sample obj(300);
    return &obj;
}

int main() {
    Sample a = returnByValue();
    cout << "Returned by Value: ";
    a.show();

    Sample& b = returnByReference();
    cout << "Returned by Reference: ";
    b.show();

    Sample* c = returnByPointer();
    cout << "Returned by Pointer: ";
    c->show();

    return 0;
}

