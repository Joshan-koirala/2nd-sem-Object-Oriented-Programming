//31). WAP to demonstrate passing an object to function by
//a). Value
//b). Reference
//c). Pointer

#include <iostream>
using namespace std;

class Sample {
private:
    int data;

public:
    Sample(int d) {
        data = d;
    }

    void show() {
        cout << "Data = " << data << endl;
    }

    void setData(int d) {
        data = d;
    }

    int getData() {
        return data;
    }
};

// Pass by Value
void passByValue(Sample obj) {
    obj.setData(100);
    cout << "Inside passByValue(): ";
    obj.show();
}

// Pass by Reference
void passByReference(Sample &obj) {
    obj.setData(200);
    cout << "Inside passByReference(): ";
    obj.show();
}

// Pass by Pointer
void passByPointer(Sample *obj) {
    obj->setData(300);
    cout << "Inside passByPointer(): ";
    obj->show();
}

int main() {
    Sample s(10);

    cout << "Original Object: ";
    s.show();
    cout << "----------------------------" << endl;
    passByValue(s);
    cout << "After passByValue(): ";
    s.show();
    cout << "-----------------------------" << endl;
    
    passByReference(s);
    cout << "After passByReference(): ";
    s.show();
    cout << "-----------------------------" << endl;
    passByPointer(&s);
    cout << "After passByPointer(): ";
    s.show();

    return 0;
}

