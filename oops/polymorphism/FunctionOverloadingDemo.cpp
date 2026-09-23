//
// Created by archana-kumari on 9/24/26.
//
using namespace std;

#include <iostream>

class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }

    ~Animal() {
        cout << "Animal destructor called" << endl;
    }

    // Function to demonstrate function overloading
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overloaded function with a different parameter
    Dog() {
        cout << "Dog constructor called" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called" << endl;
    }

    void sound() {
        cout << "Dog barks";
    }
};

int main() {
    Dog d;

    // Calling the Dog class function
    d.sound();
    /* Animal* animal = new Dog(); // Upcasting
     animal->sound(); // Calls the Dog's sound function due to polymorphism

     delete animal; // Clean up memory*/
    return 0;
}