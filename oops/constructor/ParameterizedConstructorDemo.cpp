//
// Created by archana-kumari on 9/23/26.
//
using namespace std;
#include <iostream>
class A {
public:
    int x;
    A(int i) {
        x = i;
        cout << "Parameterized Constructor called with value: " << x << endl;
    }
};

int main() {
    A obj1(10);
    A obj2(20);
    return 0;
}