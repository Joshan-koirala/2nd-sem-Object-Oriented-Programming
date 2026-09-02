//27). WAP showing Constructor overloading with appropriate example

#include <iostream>
using namespace std;

class Number {
    private:
        int value;

    public:
        Number() {
            value = 0;
        }

        Number(int x) {
            value = x;
        }

        void display() {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Number n1;       
    Number n2(100); 
    n1.display();
    n2.display();
    return 0;
}

