//
// Created by archana-kumari on 9/21/26.
//
#include <iostream>

using namespace std;

int main() {
    int var = 10;

    // Store the address of
    // var variable
    int *ptr1 = &var;
    int **ptr2 = &ptr1;

    // Access values using (*)
    // operator
    cout <<"Address of var:"<< &var << endl;
    cout << "Ptr1:" << ptr1 << endl;
    cout << "Value at Ptr1:" << *ptr1 << endl;
    cout << "Ptr2:" << ptr2 << endl;
    cout << "Address of Ptr1:" << &ptr1 << endl;
    cout << "Value at Ptr2:" << **ptr2<<endl;
    return 0;
}