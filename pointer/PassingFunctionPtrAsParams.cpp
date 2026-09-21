//
// Created by archana-kumari on 9/21/26.
// Passing a Function Pointer as a Parameter
//
using namespace std;

#include <iostream>

const int a = 15;
const int b = 2;

int multiply() {
    return a * b;
}

int add(int a, int b) {
    return a + b;
}

void print(int (*funcPtr)(int, int), int x, int y) {
    cout << "Result: " << funcPtr(x, y) << endl;
}

void print(int (*funcPtr)()) {
    cout << "Result: " << funcPtr() << endl;
}

int main() {

    print(multiply);
    print(add, 10, 5);
    return 0;

    return 0;
}


