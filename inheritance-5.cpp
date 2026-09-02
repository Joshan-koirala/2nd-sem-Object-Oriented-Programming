 	#include <iostream>
#include <string>
using namespace std;

// Base Class: Lecture
class Lecture {
protected:
    int id;
    string name;

public:
    // Function to read base details
    void readdata() {
        cout << "Enter Lecture ID: ";
        cin >> id;
        cin.ignore(); // clear newline from buffer
        cout << "Enter Lecture Name: ";
        getline(cin, name);
    }

    // Function to print base details
    void printdata() {
        cout << "Lecture ID: " << id << endl;
        cout << "Lecture Name: " << name << endl;
    }
};

// Derived Class: PartTime inherits Lecture
class PartTime : public Lecture {
private:
    float payPerHour;

public:
    // Function to read part time details
    void readdata() {
        // Call base class function
        Lecture::readdata();
        cout << "Enter Pay Per Hour: ";
        cin >> payPerHour;
    }

    // Function to print part time details
    void printdata() {
        Lecture::printdata();
        cout << "Pay Per Hour: " << payPerHour << endl;
    }
};

// Derived Class: FullTime inherits Lecture
class FullTime : public Lecture {
private:
    float payPerMonth;

public:
    // Function to read full time details
    void readdata() {
        Lecture::readdata();
        cout << "Enter Pay Per Month: ";
        cin >> payPerMonth;
    }

    // Function to print full time details
    void printdata() {
        Lecture::printdata();
        cout << "Pay Per Month: " << payPerMonth << endl;
    }
};

// Main Function
int main() {
    // Create objects of derived classes
    PartTime partTimeLecture;
    FullTime fullTimeLecture;

    cout << "--- Enter Part Time Lecture Details ---\n";
    partTimeLecture.readdata();

    cout << "\n--- Enter Full Time Lecture Details ---\n";
    fullTimeLecture.readdata();

    cout << "\n--- Part Time Lecture Info ---\n";
    partTimeLecture.printdata();

    cout << "\n--- Full Time Lecture Info ---\n";
    fullTimeLecture.printdata();

    return 0;
}

