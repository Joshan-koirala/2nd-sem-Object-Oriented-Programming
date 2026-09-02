#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

    friend void operator++(Counter &c);
};

void operator++(Counter &c) {
    c.count++;
}

int main() {
    Counter c;

    c.display();

    ++c;

    cout << "After increment: "<<endl;
    c.display();

    return 0;
}

