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
int main() {
    room1::display();
    room2::display();
    return 0;
}