#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and write to a file
    fstream file("lab.txt", ios::out | ios::in | ios::trunc);

    if (file.fail()) {
        cout << "Error opening file!" << endl;
       exit(1);
    }
    file << "Hey\n"<<"World"<<endl;
    file << "C++ File Handling\n";

    // Show current write position
    cout << "Current write position (tellp): " << file.tellp() << endl;

    // Move write pointer to the beginning
    file.seekp(0, ios::beg);
    file << "MBMC"; // overwrite "Hey"

    // Move read pointer to the beginning
    file.seekg(0, ios::beg);

    // Show current read position
    cout << "Current read position (tellg): " << file.tellg() << endl;

    // Read the first line
    string str;
    getline(file, str);
    cout << "First line after modification: " << str << endl;

    // Move read pointer 6 bytes ahead from current position
    file.seekg(6, ios::cur);
    cout << "Read pointer moved 6 bytes ahead." << endl;

    // Display current read position
    cout << "Current read position (tellg): " << file.tellg() << endl;

    file.close();
    return 0;
}

