//
// Created by archana-kumari on 10/9/26.
//
using namespace std;
#include "iostream"
template<typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax<int>(3, 7) << endl; // Output: 7
    cout << myMax<double>(3.0, 7.0) << endl; // Output: 7.0
    cout << myMax<char>('g', 'e') << endl; // Output: g
    return 0;
}