//
// Created by archana-kumari on 10/12/26.
//
using namespace std;

#include <iostream>
#include <set>

int main() {
    set<int> s = {1, 2, 3, 4, 5};
    // Erasing an element by value
    s.erase(3); // Removes the element '3' from the set
    cout << "After erasing : ";
    for (const auto &elem: s) {
        cout << elem << " ";
    }
}
