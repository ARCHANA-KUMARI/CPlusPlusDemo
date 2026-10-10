//
// Created by archana-kumari on 10/10/26.
//
#include <iostream>

using namespace std;

template<int N>
class MyClass {
public:
    void printValue() {
        std::cout << "Value: " << N << std::endl;
    }
};

int main() {
    MyClass<5> obj1;
    obj1.printValue(); // Output: Value: 5

    MyClass<10> obj2;
    obj2.printValue(); // Output: Value: 10

    return 0;
}