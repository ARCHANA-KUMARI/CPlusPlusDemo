//
// Created by archana-kumari on 10/11/26.
//
using namespace std;

#include <iostream>

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max(5, 10) << std::endl; // Output: 10
    std::cout << max(3.14, 2.71) << std::endl; // Output: 3.14
    return 0;
}