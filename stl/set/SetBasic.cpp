//
// Created by archana-kumari on 10/12/26.
//
using namespace std;
#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);

    for (const auto& elem : s) {
        std::cout << elem << " ";
    }
    return 0;
}