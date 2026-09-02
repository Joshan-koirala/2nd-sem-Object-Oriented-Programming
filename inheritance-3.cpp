#include <iostream>
#include <string>
using namespace std;

// Base Class: Student
class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) { // Constructor
        name = n;
        rollNo = r;
    }

    void showInfo() {
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
    }
};

// Derived Class: Computer Science Student
class ComputerScience : public Student {
private:
    float programming, dataStructures, networking;

public:
    ComputerScience(string n, int r, float p, float d, float net): Student(n, r) { // Call base constructor
        programming = p;
        dataStructures = d;
        networking = net;
    }

    float averageMarks() {
        return (programming + dataStructures + networking) / 3;
    }
};

// Derived Class: Mathematics Student
class Mathematics : public Student {
private:
    float algebra, calculus, statistics;

public:
    Mathematics(string n, int r, float a, float c, float s): Student(n, r) { // Call base constructor
        algebra = a;
        calculus = c;
        statistics = s;
    }

    float averageMarks() {
        return (algebra + calculus + statistics) / 3;
    }
};

int main() {
    string name;
    int roll;
    float m1, m2, m3;

    // Input for Computer Science student
    cout << "\nEnter Computer Science Student details:\n";
    cout << "Name:";
    cin.ignore(); // clear any leftover newline
    getline(cin, name);
    cout << "Roll No: ";
    cin >> roll;
    cout << "Marks in Programming: ";
    cin >> m1;
    cout << "Marks in Data Structures: ";
    cin >> m2;
    cout << "Marks in Networking: ";
    cin >> m3;

    ComputerScience csStudent(name, roll, m1, m2, m3);

    // Input for Mathematics student
    cout << "\nEnter Mathematics Student details:\n";
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);
    cout << "Roll No: ";
    cin >> roll;
    cout << "Marks in Algebra: ";
    cin >> m1;
    cout << "Marks in Calculus: ";
    cin >> m2;
    cout << "Marks in Statistics: ";
    cin >> m3;

    Mathematics mathStudent(name, roll, m1, m2, m3);

    // Output
    cout << "\n--- Computer Science Student ---\n";
    csStudent.showInfo();
    cout << "Average Marks: " << csStudent.averageMarks() << endl;

    cout << "\n--- Mathematics Student ---\n";
    mathStudent.showInfo();
    cout << "Average Marks: " << mathStudent.averageMarks() << endl;

    return 0;
}

