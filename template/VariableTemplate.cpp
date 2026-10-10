//
// Created by archana-kumari on 10/10/26.
//
#include <iostream>

using namespace std;
template<typename T> constexpr T pi = T(3.1415926535897932385L);

int main() {
    cout << pi<double> << endl; // Output: 3.14159
    cout << pi<float> << endl; // Output: 3.14159
    cout << pi<long double> << endl; // Output: 3.14159
    return 0;
}