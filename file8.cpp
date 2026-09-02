#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");

    if (file.fail()) {
        cout << "Error opening file!" << endl;
       exit(1);
    }

    string str;
    while (getline(file, str)) {
        cout << str << endl;    
    }

    file.close(); 
    return 0;
}

