#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    int id;
    char name[50];
    double salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // clear newline
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() const {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Salary: " << salary << endl;
    }
};

int main() {
	Employee emp;
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    ofstream fout("employees.dat", ios::binary);
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp.input();
        fout.write((char*)&emp, sizeof(emp));
    }
    fout.close();

    // read from binary file
    ifstream fin("employees.dat", ios::binary);
    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n--- Employee Records from File ---\n";
    while (fin.read((char*)&emp, sizeof(emp))) {
        emp.display();
    }
    fin.close();

    return 0;
}

