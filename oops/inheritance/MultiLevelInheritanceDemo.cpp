//
// Created by archana-kumari on 9/27/26.
//
#include "iostream"
using namespace std;
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle constructor" << std::endl;
    }

    ~Vehicle() {
        cout << "This is a Vehicle destructor" << std::endl;
    }
};

class FourWheeler : public Vehicle {
public:
    FourWheeler() {
        cout << "This is a FourWheeler constructor" <<std::endl;
    }

    ~FourWheeler() {
        cout << "This is a FourWheeler destructor" << std::endl;
    }
};

class Car : public FourWheeler {
public:
    Car() {
        cout << "This is a Car constructor" << std::endl;
    }

    ~Car() {
        cout << "This is a Car destructor" << std::endl;
    }
};

int main() {
    Car myCar; // Creating an object of the derived class
    return 0;
}