#include <iostream>
using namespace std;

// Base class: Accept marks
class Marks {
protected:
    float m1, m2, m3;

public:
    void getMarks() {
        cout << "Enter marks for Nepali: ";
        cin >> m1;
        cout << "Enter marks for Science: ";
        cin >> m2;
        cout << "Enter marks for Mathematics: ";
        cin >> m3;
    }
};

// Derived class from Marks: Calculate total
class Total : public Marks {
protected:
    float total;

public:
    void calcTotal() {
        total = m1 + m2 + m3;
    }
};

// Derived class from Total: Calculate and display percentage
class Percentage : public Total {
public:
    void showPercentage() {
        float percent = (total / 300) * 100; // assuming each subject is out of 100
        cout << "\nTotal Marks = " << total;
        cout << "\nPercentage = " << percent << "%" << endl;
    }
};

int main() {
    Percentage student;

    student.getMarks();   // From Marks
    student.calcTotal();  // From Total
    student.showPercentage(); // From Percentage

    return 0;
}

