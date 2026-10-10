//
// Created by archana-kumari on 10/9/26.
//
#include <iostream>

using namespace std;

template<typename T>
class Geek {
public:
    T y;
    T x;

    Geek(T val1, T val2) : x(val1), y(val2) {}

    void getValues() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Geek<int> intGeek(3, 7);
    intGeek.getValues(); // Output: 3 7
    Geek<double> doubleGeek(3.14, 6.28);
    doubleGeek.getValues(); // Output: 3.14 6.28
    return 0;
}