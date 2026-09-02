#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw 'N';  // throw char
        } 
        else if (num == 0) {
            throw 0;   // throw int
        } 
        else {
            throw 0.2; // throw something else (like double)
        }
    }
    catch (char c) {
        cout << "!!!Negative number entered!!!" << endl;
    }
    catch (int i) {
        cout << "!!! Zero entered!!!" << endl;
    }
    catch (...) {
        cout << "!!!Caught  ellipsis !!!" << endl;
    }

    return 0;
}

