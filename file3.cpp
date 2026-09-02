#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    ofstream file("lab.txt",ios::app); 
    if (file.fail()) {
       cout << "Error opening the file!" << endl;
        exit (1);
    }
    file <<"Hello!!\n"<<"It's me Joshan Koirala\n"<<endl;
    file <<"Opening in append mode"<<endl;
    cout << "Text written to 'lab.txt' successfully." << endl;

    file.close(); 
    return 0;
}

