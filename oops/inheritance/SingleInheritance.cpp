//
// Created by archana-kumari on 9/26/26.
//
using namespace std;

#include <iostream>

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This is a Car" << endl;
    }
};

int main() {
    Car myCar; // Creating an object of the derived class
    return 0;
}
