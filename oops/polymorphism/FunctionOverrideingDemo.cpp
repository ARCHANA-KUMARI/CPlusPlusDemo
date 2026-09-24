//
// Created by archana-kumari on 9/25/26.
//
using namespace std;

#include <iostream>

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }

    // Virtual function to demonstrate function overriding
    virtual void display() {
        cout << "Display from Base class" << endl;
    }

    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    // Overriding the display function from Base class
    void display() override {
        cout << "Display from Derived class" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base *basePtr; // Pointer of Base class type
    Derived derivedObj; // Object of Derived class

    basePtr = &derivedObj; // Pointing basePtr to derivedObj

    // Calling the display function using basePtr
    basePtr->display(); // This will call the Derived class's display function due to polymorphism

    return 0;
}