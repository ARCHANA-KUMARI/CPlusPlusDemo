//
// Created by archana-kumari on 10/13/26.
//
using namespace std;

#include "iostream"
#include "map"

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    int keyToFind = 2;
    auto it = myMap.find(keyToFind);

    if (it != myMap.end()) {
        std::cout << "Found: " << it->first << " => " << it->second << std::endl;
    } else {
        std::cout << "Key " << keyToFind << " not found." << std::endl;
    }

    return 0;
}