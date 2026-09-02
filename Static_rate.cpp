//30). The interest rate is static member common to all bank accounts. It can be changed via static function. Each object can calculate its owm interest using shared interest rate.

#include <iostream>
using namespace std;

class Interest {
    private:
        double balance;
        int time;
        static float rate;

    public:
        void input() {
            cout << "Enter balance: ";
            cin >> balance;
            cout << "Enter time (in years): ";
            cin >> time;
        }

        void calculate() {
            double interest = (balance * rate * time) / 100;
            cout << "Balance: " << balance << endl;
            cout << "Time: " << time << " years" << endl;
            cout << "Interest: " << interest << endl;
        }

         static void setRate(float r) {
            rate = r;
        }
};

float Interest::rate = 5.0;

int main() {
    char change;
    float newRate;

    cout << "Default interest rate is 5%\n";
    cout << "Do you want to change the interest rate? (y/n): ";
    cin >> change;

    if (change == 'y' || change == 'Y') {
        cout << "Enter new interest rate: ";
        cin >> newRate;
        Interest::setRate(newRate);
    }

    Interest i1;
    i1.input();
    i1.calculate();
    return 0;
}

