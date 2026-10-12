//
// Created by archana-kumari on 10/12/26.
//
#include <iostream>
#include <map>
using namespace std;

int main() {

    // Creating an empty map
    map<int, string> m1;

    // Initialize map with list
    map<int, string> m2 = {{1, "Geeks"},
                           {2, "For"}, {3, "Geeks"}};

    for (auto& p : m2)
        cout << p.first << " " <<
             p.second << endl;
    return 0;
}