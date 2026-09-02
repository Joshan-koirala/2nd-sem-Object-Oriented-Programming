//18). C++ program to Find Simple Interest Using Concept of 
//i). Return By value
//ii). Return By Refrence
//iii). Return By Pointer

#include <iostream>
using namespace std;

// i) Return by Value
float Value(float p, float r, float t) {
    float si = (p * r * t) / 100;
    return si;
}

// ii) Return by Reference
float siRef;
float& Reference(float p, float r, float t) {
    siRef = (p * r * t) / 100;
    return siRef;
}

// iii) Return by Pointer (using static variable)
float* Pointer(float p, float r, float t) {
    static float si;
    si = (p * r * t) / 100;
    return &si;
}

int main() {
    float p, r, t;
    cout << "Enter the Principal, Rate and Time (in years): ";
    cin >> p >> r >> t;

    cout << "\nPrincipal: " << p << ", Rate: " << r << ", Time: " << t << endl;

    float valueResult = Value(p, r, t);
    cout << "Simple Interest (Return by Value): " << valueResult << endl;

    float& referenceResult = Reference(p, r, t);
    cout << "Simple Interest (Return by Reference): " << referenceResult << endl;

    float* pointerResult = Pointer(p, r, t);
    cout << "Simple Interest (Return by Pointer): " << *pointerResult << endl;

    return 0;
}

