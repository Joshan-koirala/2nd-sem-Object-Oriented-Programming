#include <iostream>
using namespace std;

class Rupees;

class Dollar {
    int dol, cent;

public:
    Dollar(int d = 0, int c = 0) {
        dol = d;
        cent = c;
    }

    void getData() {
        cout << "Enter dollars: ";
        cin >> dol;
        cout << "Enter cents: ";
        cin >> cent;
    }

    int totalCents() const {
        return dol * 100 + cent;
    }

    operator Rupees();
};

class Rupees {
    int rs, paisa;

public:
    Rupees(int r = 0, int p = 0) {
        rs = r;
        paisa = p;
    }

    void display() {
        cout << "Equivalent Rupees: Rs " << rs << "  and " << paisa << " Paisa\n";
    }
};

Dollar::operator Rupees() {
    int totalCents = dol * 100 + cent;
    int totalPaisa = totalCents * 130;

    int r = totalPaisa / 100;
    int p = totalPaisa % 100;

    return Rupees(r, p);
}

int main() {
    Dollar d;
    d.getData();

    Rupees r = d;

    r.display();

    return 0;
}

