//LAb-3
//17). C++ program to Swap Two Numbers Using Concept of 
//i). Pass By value
//ii). Pass By Refrence 
//iii). Pass By Pointer

#include <iostream>
using namespace std;

// i) Pass by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue \n First Number: " << a << "\n Second Number:" << b << endl;
}

// ii) Pass by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference \n First Number:" << a << "\n Second Number: " << b << endl;
}

// iii) Pass by Pointer
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByPointer \n First Number:" << *a << "\n Second Number: " << *b << endl;
}

int main() {
    int x,y;
    cout<<"Enter 2 Integer to Swap:"<<endl;
    cin>>x>>y;
    cout << "Original values \n First Number: " << x << "\n Second Number:" << y <<"\n"<< endl;

    // Pass by Value
    swapByValue(x, y);
    cout << "After swapByValue \n First Number: " << x << "\n Second Number:" << y << endl << endl;

    // Pass by Reference
    swapByReference(x, y);
    cout << "After swapByReference \n First Number:" << x << "\n Second Number:" << y << endl << endl;

    // Pass by Pointer
    swapByPointer(&x, &y);
    cout << "After swapByPointer \n First Number: " << x << "\n Second Number:" << y << endl;

    return 0;
}

