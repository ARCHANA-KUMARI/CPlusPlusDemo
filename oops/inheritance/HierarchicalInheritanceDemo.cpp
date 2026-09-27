//
// Created by archana-kumari on 9/27/26.
//
#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle constructor" << endl;
    }
    ~Vehicle()
    {
        cout << "This is a Vehicle destructor" << endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This Vehicle is Car Constructor" << endl;
    }
    ~Car()
    {
        cout << "This is a Car destructor" << endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "This Vehicle is Bus Constructor" << endl;
    }
    ~Bus()
    {
        cout << "This is a Bus destructor" << endl;
    }
};

int main()
{
    Car obj1;
    Bus obj2;
    return 0;
}