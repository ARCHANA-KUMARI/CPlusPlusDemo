//
// Created by archana-kumari on 9/20/26.
//
using namespace std;

#include <iostream>

int main() {
    int var = 20;
    int *ptr = &var; // pointer to var
    cout << "Value pointed to by ptr: " << *ptr << endl; // dereferencing pointer
    return 0;
}