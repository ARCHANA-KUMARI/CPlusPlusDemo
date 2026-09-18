//
// Created by archana-kumari on 9/19/26.
 // Nested namespaces in C++ allow you to define a namespace within another namespace. This can help organize code and avoid name conflicts, especially in large projects. In this example, we have an outer namespace called `outer` and an inner namespace called `inner`. Each namespace has its own `display` function, which prints a message indicating which namespace it belongs to. The `main` function demonstrates how to access these functions using the scope resolution operator (`::`).
//
#include <iostream>

using namespace std;
namespace outer {
    void display() {
        std::cout << "This is the outer namespace" << std::endl;
    }

    namespace inner {
        void display() {
            std::cout << "This is the inner namespace" << std::endl;
        }
    }
}

int main() {
    outer::display(); // Accessing display function from outer namespace
    outer::inner::display(); // Accessing display function from inner namespace
    return 0;
}