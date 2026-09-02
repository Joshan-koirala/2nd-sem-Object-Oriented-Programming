#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNo;

public:
    void readStudent() { 	
        cout << "Enter name:";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;  
}

    void displayStudent() {
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
    }
};

// Derived class 1 - Science
class ScienceStudent : public Student {
private:
    int physics, chemistry, math;

public:
    void readScience() {
        readStudent();
        cout << "Enter Physics marks: ";
        cin >> physics;
        cout << "Enter Chemistry marks: ";
        cin >> chemistry;
        cout << "Enter Math marks: ";
        cin >> math;
    }

    void displayScience() {
        displayStudent();
        cout << "Physics: " << physics
             << "\nChemistry: " << chemistry
             << "\nMath: " << math << endl;
    }
};

// Derived class 2 - Commerce
class CommerceStudent : public Student {
private:
    int accounts, business, economics;

public:
    void readCommerce() {
        readStudent();
        cout << "Enter Accounts marks: ";
        cin >> accounts;
        cout << "Enter Business Studies marks: ";
        cin >> business;
        cout << "Enter Economics marks: ";
        cin >> economics;
    }

    void displayCommerce() {
        displayStudent();
        cout << "Accounts: " << accounts
             << "\nBusiness Studies: " << business
             << "\nEconomics: " << economics << endl;
    }
};

int main() {
    ScienceStudent s1;
    CommerceStudent c1;

    cout << "--- Enter Science Student Details ---" << endl;
    s1.readScience();

    cout << "\n--- Enter Commerce Student Details ---" << endl;
    c1.readCommerce();

    cout << "\n--- Science Student Details ---" << endl;
    s1.displayScience();

    cout << "\n--- Commerce Student Details ---" << endl;
    c1.displayCommerce();

    return 0;
}

