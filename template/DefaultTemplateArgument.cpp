//
// Created by archana-kumari on 10/10/26.
//
using namespace std;

#include <iostream>

template<typename T1, typename T2 = double, typename T3 = std::string>
class Geek {
public:
    T1 x;
    T2 y;
    T3 z;

    Geek(T1 val1, T2 val2, T3 val3) : x(val1), y(val2), z(val3) {} // Default constructor
    void getValues() {
        std::cout << x << " " << y << " " << z << std::endl;
    }
};

int main() {
    Geek<int> geek1(3, 3.14, "Hello");
    geek1.getValues(); // Output: 3 3.14 Hello

    Geek<std::string, int> geek2("World", 42, "C++");
    geek2.getValues(); // Output: World 42 C++

    Geek<char, float, std::string> geek3('A', 2.71f, "Template");
    geek3.getValues(); // Output: A 2.71 Template

    return 0;
}