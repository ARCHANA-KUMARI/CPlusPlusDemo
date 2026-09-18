//
// Created by archana-kumari on 9/17/26.
#include <iostream>
class GFG {
    // private data members of the class
private:
    int value = 100;

    friend void display(GFG &obj); // friend function declaration
};

class FriendClass {
public:
    void showValue(GFG &obj) {
        std::cout << "Value: " << obj.value << std::endl; // accessing private member of GFG class
    }
};