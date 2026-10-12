//
// Created by archana-kumari on 10/12/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Iterator pointing to the beginning
    auto it = v.begin();

    // Moving iterator forward by 2 positions
    it = it + 2;
    cout << "Element after moving forward by 2: " << *it << endl;

    // Moving iterator backward by 1 position
    it = it - 1;
    cout << "Element after moving backward by 1: " << *it << endl;

    return 0;
}