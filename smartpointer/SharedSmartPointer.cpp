//
// Created by archana-kumari on 11/2/26.
//
#include <iostream>
#include <memory>

using namespace std;

int main() {

    shared_ptr<int> ptr1 = make_shared<int>(100);

    cout << "Count: " << ptr1.use_count() << endl;

    shared_ptr<int> ptr2 = ptr1;

    cout << "Count: " << ptr1.use_count() << endl;

    shared_ptr<int> ptr3 = ptr1;

    cout << "Count: " << ptr1.use_count() << endl;

    return 0;
}