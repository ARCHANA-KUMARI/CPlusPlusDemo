//
// Created by archana-kumari on 9/25/26.
//
using namespace std;

#include <iostream>

class Shape {
protected:
    string color;
public:
    Shape() {
        cout << "Default Shape constructor called" << endl;
    }

    Shape(string c) : color(c) {
        cout << "Shape constructor called with color: " << color << endl;
    }

    // Abstract or Pure virtual method
    virtual double area() = 0;

    string getColor() {
        return color;
    }

    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    } // Virtual destructor
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle() {
        cout << "Default Rectangle constructor called" << endl;
    }

    Rectangle(string color, double length, double width) : Shape(color), height(length),
                                                           width(width) {
        cout << "Rectangle constructor called with height: " << height << " and width: " << width
             << endl;
    }

    double area() override {
        return height * width;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

int main() {
    /*  Rectangle rect("Red", 5.0, 3.0);
      cout << "Area of rectangle: " << rect.area() << endl;
      cout << "Color of rectangle: " << rect.getColor() << endl;*/

    Shape *s = new Rectangle("Yellow", 2, 4);
    cout << "Rectangle color is " << s->getColor() << " and area is : " << s->area() << endl;
    delete s; // This will call the destructor of Rectangle and then Shape
    return 0;
}