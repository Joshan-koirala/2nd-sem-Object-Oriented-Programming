#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    void getData() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    bool operator > (Distance d) {
        int totalInches1 = feet * 12 + inches;
        int totalInches2 = d.feet * 12 + d.inches;
        return totalInches1 > totalInches2;
    }

    void display() {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    Distance d1, d2;

    cout << "Enter first distance:\n";
    d1.getData();

    cout << "\nEnter second distance:\n";
    d2.getData();

    cout << "\nGreater distance is: ";
    if (d1 > d2)
        d1.display();
    else if (d2 > d1)
        d2.display();
    else
        cout << "Both distances are equal";

    return 0;
}

