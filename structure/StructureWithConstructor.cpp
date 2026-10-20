//
// Created by archana-kumari on 10/20/26.
//
#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }

    ~Point() {
        cout << "Point object destroyed." << endl;
    }
    };


    int main() {
        Point p1(10, 20); // Create a Point object with x=10 and y=20
        p1.display(); // Display the coordinates of the point
        return 0;
    }