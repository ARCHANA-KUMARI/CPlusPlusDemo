//
// Created by archana-kumari on 9/19/26.
//
using namespace std;

#include <iostream>

int n = 3;

int main() {
    // Accessing global namespace
    int n = 7;
    cout << ::n << endl;
    cout << n;

    return 0;
}