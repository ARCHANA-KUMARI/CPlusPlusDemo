//
// Created by archana-kumari on 10/11/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Iterator pointing to the first element
    auto it = v.begin();

    // Dereferencing iterator to access value
    cout << "First element: " << *it << endl;

    // Dereferencing iterator to update value
    *it = 100;

    // Printing updated first element
    cout << "Updated first element: " << *it << endl;



    // Incrementing iterator to move to the next element
    ++it;
    cout << "After increment: " << *it << endl;

    // Decrementing iterator to move back to the previous element
    --it;
    cout << "After decrement: " << *it << endl;
    return 0;
}