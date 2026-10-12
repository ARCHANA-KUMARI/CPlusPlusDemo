//
// Created by archana-kumari on 10/12/26.
//
using namespace std;

#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    std::set<int> s2 = {1, 2, 3, 2, 1};
    for (const auto &elem: s2) {
        std::cout << elem << " "; // output: 1 2 3
    }
    return 0;
}