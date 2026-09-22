//
// Created by archana-kumari on 9/23/26.
//
using namespace std;

#include <iostream>

class Car {
public:
    string brand;

    void display() {
        cout << "Car brand: " << brand << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.display(); // Output: Car brand: Toyota

    Car car2;
    car2.brand = "Honda";
    car2.display(); // Output: Car brand: Honda

    return 0;
}