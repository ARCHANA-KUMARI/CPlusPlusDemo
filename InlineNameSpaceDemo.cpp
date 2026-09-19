//
// Created by archana-kumari on 9/19/26.
//
#include <iostream>

namespace Library {
    inline namespace Version1 {
        void display() {
            std::cout << "This is Version 1 of the Library namespace" << std::endl;
        }
    }
}

int main() {
    Library::display(); // Accessing display function from Version1 inline namespace
    return 0;
}