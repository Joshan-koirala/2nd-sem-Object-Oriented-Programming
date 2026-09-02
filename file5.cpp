#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("lab.txt");

    if (file.fail()) {
        cout << "Error opening file!" << endl;
       exit(1);
    }

    string str;
    cout << "Whole contents of the lab.txt:\n";
    while (getline(file, str)) { 
        cout << str << endl;    
    }

    file.close();
    return 0;
}

