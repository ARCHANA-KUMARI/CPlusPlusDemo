//
// Created by archana-kumari on 10/15/26.
//
#include<iostream>
#include<string>

int main() {
    std::string str = "Hello, World!";
    std::cout << "String: " << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;
    std::cout << "Length using size(): " << str.size() << std::endl;
    std::cout << "Substring (0, 5): " << str.substr(0, 5) << std::endl;
    std::cout << "Find 'World': " << str.find("World") << std::endl;

    //String Array is array of characters
    char strArray[] = "Hello, Array!";
    std::cout << "String Array: " << strArray << std::endl;

    for (int i = 0; strArray[i] != '\0'; ++i) {
        std::cout << "Character at index " << i << ": " << strArray[i] << std::endl;
    }

    // Traversing using range-based for loop
    for (char c: str) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Traversing using iterator
    for (auto it = str.begin(); it != str.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}