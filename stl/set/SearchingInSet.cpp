//
// Created by archana-kumari on 10/12/26.
//
using namespace std;

#include <iostream>
#include <set>

int main() {
    set<int> s = {1, 2, 3, 4, 5};
    int key = 3;
    auto it = s.find(key);
    if (it != s.end()) {
        cout << "Element " << key << " found in the set." << endl;
    } else {
        cout << "Element " << key << " not found in the set." << endl;
    }

    // Check whether an element exists using count()
    if (s.count(2))
        cout << "2 exists in the set" << endl;
    return 0;
}