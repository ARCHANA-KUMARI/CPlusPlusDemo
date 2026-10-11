//
// Created by archana-kumari on 10/11/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    for (int x: v) {
        cout << x << " ";
    }

    v.at(2) = 100; // Change the value at index 2
    cout << "\nAfter modification: ";
    for (int x: v) {
        cout << x << " ";
    }

    v.push_back(50); // Add a new element at the end
    cout << "\nAfter adding an element: ";
    for (int x: v) {
        cout << x << " ";
    }

    v.insert(v.begin() + 1, 15); // Insert 15 at index 1
    cout << "\nAfter inserting an element: ";
    for (int x: v) {
        cout << x << " ";
    }

    cout << "\nSize of vector: " << v.size() << endl; // Output the size of the vector

    // Delete the last element
    v.pop_back();
    cout << "After deleting the last element: ";
    for (int x: v) {
        cout << x << " ";
    }

    v.erase(v.begin() + 1); // Delete the element at index 1
    cout << "\nAfter deleting an element: ";
    for (int x: v) {
        cout << x << " ";
    }
    return 0;
}