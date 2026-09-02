//28). WAP showing concept of Destructor

#include <iostream>
using namespace std;

class Demo {
    public:
        Demo() {
            cout << "Constructor called!" << endl;
        }

        ~Demo() {
            cout << "Destructor called!" << endl;
        }

        void show() {
            cout << "Inside show() function." << endl;
        }
};

int main() {
    Demo d1;
    d1.show();
    return 0;
}

