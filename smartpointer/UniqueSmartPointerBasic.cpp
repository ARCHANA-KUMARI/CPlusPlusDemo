//
// Created by archana-kumari on 11/2/26.
//
#include <iostream>
#include <memory>

using namespace std;

int main() {

    unique_ptr<int> ptr1 = make_unique<int>(100);

    cout << *ptr1 << endl;
    cout<< "Address of ptr1: " << ptr1.get() << endl;

    // Transfer ownership
    unique_ptr<int> ptr2 = move(ptr1);

    cout << *ptr2 << endl;
    cout<< "Address of ptr2: " << ptr2.get() << endl;

    if (ptr1 == nullptr) {
        cout << "ptr1 has no ownership" << endl;
    }

    return 0;
}