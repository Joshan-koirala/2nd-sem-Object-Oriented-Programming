//26). Create a class 'Employee' having two private data members EmployeeName and EmployeeId. Create an object 'Employee1' of type Employee. Copy contents of Employee1 to Employee2.
//  [Both Shallow and Deep copy]
  
#include <iostream>
using namespace std;

class Employee {
private:
    string EmployeeName;
    int EmployeeId;

public:
    Employee() {
        EmployeeName = "";
        EmployeeId = 0;
    }
    Employee(string name, int id) {
        EmployeeName = name;
        EmployeeId = id;
    }
    // Deep Copy Constructor
    Employee(Employee& e) {
        EmployeeName = e.EmployeeName;
        EmployeeId = e.EmployeeId;
    }
    // Shallow copy
    void shallowCopy(Employee& e) {
        EmployeeName = e.EmployeeName;
        EmployeeId = e.EmployeeId;
    }

    void display() {
        cout << "Employee ID: " << EmployeeId << ", Name: " << EmployeeName << endl;
    }
};

int main() {
    Employee Employee1("Joshan", 9);

    // Deep Copy
    Employee Employee2 = Employee1;

    // Shallow Copy
    Employee Employee3;
    Employee3.shallowCopy(Employee1);

    cout << "\nOriginal (Employee1): ";
    Employee1.display();

    cout << "Deep Copy (Employee2): ";
    Employee2.display();

    cout << "Shallow Copy (Employee3): ";
    Employee3.display();

    return 0;
}

