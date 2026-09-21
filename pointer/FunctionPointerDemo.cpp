//
// Created by archana-kumari on 9/21/26.
// Calling a Function Using a Function Pointer
//
using namespace std;

#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer and assign it to the multiply function
    int (*funcPtr1)(int, int);
    funcPtr1 = multiply;

    // Call the function using the function pointer
    int result = funcPtr1(5, 3);
    cout << "Result: " << result << endl; // Output: Result: 15

    return 0;
}