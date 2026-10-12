//
// Created by archana-kumari on 10/12/26.
//
using namespace std;

#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 3, 4, 5};
    // Traversing using iterators
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;
    return 0;
}