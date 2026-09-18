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

namespace room4{
    void display() {
        std::cout << "This is room 4" << std::endl;
    }

    void display1() {
        std::cout << "This is room 4 for display1: " << std::endl;
    }
}

using namespace room3; // Using room3 namespace
using room4::display1; // Using room4::display1 function`
int main() {
    room1::display(); // Accessing display function from room1 namespace
    room2::display(); // Accessing display function from room2 namespace
    display(); // Accessing display function from room3 namespace (using directive)
    room4::display(); // Accessing display function from room4 namespace using :: operator
    display1(); // Accessing display1 function from room4 namespace
    return 0;
}