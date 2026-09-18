//
// Created by archana-kumari on 9/19/26.
//
#include <iostream>
namespace {
    int value = 42; // This variable is only accessible within this translation unit
}

int main() {
    std::cout << "Value from anonymous namespace: " << value << std::endl;
    return 0;
}