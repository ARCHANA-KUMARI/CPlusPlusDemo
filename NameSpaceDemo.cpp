//
// Created by archana-kumari on 9/18/26.
//
#include <iostream>
namespace room1{
    void display(){
        std::cout << "This is room 1" << std::endl;
    }
}

namespace room2{
    void display(){
        std::cout << "This is room 2" << std::endl;
    }
}

namespace room3{
    void display(){
        std::cout << "This is room 3" << std::endl;
    }
}
using namespace room3; // Using room3 namespace
int main() {
    room1::display(); // Accessing display function from room1 namespace
    room2::display(); // Accessing display function from room2 namespace
    display(); // Accessing display function from room3 namespace (using directive)
    return 0;
}