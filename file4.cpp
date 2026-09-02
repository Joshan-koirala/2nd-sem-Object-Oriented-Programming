#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("lab.txt", ios::in);

    if (file.fail()) {
        cout << "Error opening file!" << endl;
        exit(1);
    }
    string str;
    if (getline(file, str)) { 
        cout << "First line in file: \n" << str << endl;
        exit(0);
	}
    file.close(); 
    return 0;
}

