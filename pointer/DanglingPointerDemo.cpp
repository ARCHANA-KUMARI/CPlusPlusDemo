//
// Created by archana-kumari on 9/21/26.
//
#include <iostream>

using namespace std;

int *getPointer() {
    int x = 10;

    // returning address of local variable
    return &x;//// x's storage is reclaimed right after this returns
}

int main() {

    // ptr becomes dangling here
    int *ptr = getPointer(); //// ptr now holds a dead address

    // Undefined behavior
    cout << *ptr; // // undefined behavior — reading freed stack memory
    return 0;
}