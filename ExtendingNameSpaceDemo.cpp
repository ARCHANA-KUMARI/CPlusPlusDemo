//
// Created by archana-kumari on 9/19/26.
//
#include <iostream>
using namespace std;

namespace extending {
    void fun(){
        cout << "This is the extending namespace" << endl;
    }
}

namespace extending {
    void fun2(){
        cout << "This is the extending namespace with fun2" << endl;
    }
}

int main() {
    extending::fun();
    extending::fun2();
    return 0;
}