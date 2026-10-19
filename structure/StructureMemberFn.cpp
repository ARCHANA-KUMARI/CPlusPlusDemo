//
// Created by archana-kumari on 10/19/26.
//
#include "iostream"

using namespace std;

struct Point {
    int x;
    int y;

    void sum() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
        int sum = x + y;
        cout << "Sum of coordinates: " << sum << endl;

    }
};

int main() {
    Point p1 = {10, 20}; // Initialize a Point structure with x=10 and y=20
    p1.sum(); // Calling the member function to display sum

    // Updating members
    p1.x = 99;
    p1.y = 88;

    // Accessing members again
    p1.sum(); // Display updated coordinates
    return 0;
}