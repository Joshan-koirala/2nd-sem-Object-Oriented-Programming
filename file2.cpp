#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    ofstream file("lab.txt"); 
    if (file.fail()) {
       cout << "Error opening the file!" << endl;
        exit (1);
    }

    file << "Joshan Koirala"<<endl;
    file << "BSc. 2nd Sem 2081 Batch \n"<<"Section: A \n"<<"Roll.NO: 09"<<endl;

    cout << "Text written to 'lab.txt' successfully." << endl;

    file.close(); // close the file
    return 0;
}

