#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("lab.txt");

    if (file.fail()) {
        cout << "Error creating the file!" << endl;
        exit (1);
    }
    cout << "File created successfully." << endl;
    file << "File created successfully." << endl;

    file.close(); 
    return 0;
}

