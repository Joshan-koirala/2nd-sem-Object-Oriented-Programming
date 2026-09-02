#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream sfile("test.txt");  
    ofstream dfile("done.txt"); 

    if (sfile.fail()) {
        cout << "Error: Could not open source file!" << endl;
        exit(1);
    }
    if (sfile.fail()) {
        cout << "Error: Could not create destination file!" << endl;
        exit(1);
    }

    string str;
    while (getline(sfile, str)) { 
        dfile<< str<< endl;        
    }

    cout << "File copied successfully!" << endl;

    sfile.close();
    dfile.close();

    return 0;
}

