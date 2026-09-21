//
// Created by archana-kumari on 9/21/26.
//
using namespace std;

#include <iostream>

int &findGreater(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    int &greater = findGreater(x, y);
    cout << "Greater value: " << greater << endl; // Output: Greater value: 20
    int greaterValue = 30;
    cout << "Greater value after assignment: " << greaterValue << endl; // Output: Greater value: 30
    return 0;
}