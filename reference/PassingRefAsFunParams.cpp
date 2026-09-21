//
// Created by archana-kumari on 9/21/26.
//
using namespace std;

#include <iostream>

int modifyValue(int &a) {
    a = 20;
    return a;
}

int main() {
    int x = 10;
    cout << "Before modifyValue: " << x << endl; // Output: Before modifyValue: 10
    modifyValue(x);
    cout << "After modifyValue: " << x << endl; // Output: After modifyValue: 20
    return 0;
}