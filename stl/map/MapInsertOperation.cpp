//
// Created by archana-kumari on 10/12/26.
//
using namespace std;

#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> myMap;
    myMap.insert(std::make_pair("apple", 5));
    myMap.insert(std::make_pair("banana", 3));
    myMap.insert(std::make_pair("orange", 8));

    for (const auto &pair: myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    // Accessing elements
    std::cout << myMap["apple"] << std::endl;
    std::cout << myMap.at("banana") << std::endl;
    return 0;
}