//
// Created by archana-kumari on 10/10/26.
//
#include <iostream>

using namespace std;

template<typename T, typename U, typename V>
class Geek {
public:
    T x;
    U y;
    V z;

    Geek(T val1, U val2, V val3) : x(val1), y(val2), z(val3) {}

    void getValues() {
        std::cout << x << " " << y << " " << z << std::endl;
    }
};

int main() {
    Geek<int, double, char> geek1(3, 3.14, 'g');
    geek1.getValues(); // Output: 3 3.14 g

    Geek<string, int, float> geek2("Hello", 42, 2.71f);
    geek2.getValues(); // Output: Hello 42 2.71

    return 0;
}