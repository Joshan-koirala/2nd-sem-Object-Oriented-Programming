#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound\n";
    }
    virtual ~Animal() {}  // Virtual destructor
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof Woof\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow Meow\n";
    }
};

class Bird : public Animal {
public:
    void makeSound() override {
        cout << "Bird says: Chirp Chirp\n";
    }
};

int main() {
    Animal* ptr;

    Dog d;
    Cat c;
    Bird b;

    ptr = &d;
    ptr->makeSound();

    ptr = &c;
    ptr->makeSound();

    ptr = &b;
    ptr->makeSound();

    return 0;
}


