//22). WAP to create class called Person that has private member variables for name, age, and country. Implement member function to set and display valuea of these variables

#include<iostream>
#include<string>
using namespace std;

class Person {
	private:
		string name;
        int age;
        string country;

    public:
        void setdata() {
            cout << "Enter the name of person: ";
            getline(cin, name);
            cout << "Enter the age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter the person's country: ";
            getline(cin, country);
        }

        void Display() {
            cout << "\nPerson details:\n";
            cout << "Name    : " << name << endl;
            cout << "Age     : " << age << endl;
            cout << "Country : " << country << endl;
        }
};

int main() {
    Person d;
    d.setdata();
    d.Display();  
    return 0;
}

