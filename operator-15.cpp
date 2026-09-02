#include <iostream>
using namespace std;

class Gram;

class Tola {
    float tola;

public:
    Tola(float t = 0) {
        tola = t;
    }

    void getData() {
        cout << "Enter weight in Nepali tola: ";
        cin >> tola;
    }

    float getTola() const {
        return tola;
    }

    operator Gram();
};

class Gram {
    float gram;

public:
    Gram(float g = 0) {
        gram = g;
    }

    void display() {
        cout << "Weight in grams: " << gram << " g\n";
    }
};

Tola::operator Gram() {
    float g = tola * 11.664;
    return Gram(g);
}

int main() {
    Tola t;
    t.getData();

    Gram g = t;

    g.display();

    return 0;
}

