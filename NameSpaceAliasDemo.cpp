//
// Created by archana-kumari on 9/19/26.
#include <iostream>
namespace  Mathematics{
    int add(int a, int b){
        return a + b;
    }
}

//Creating an alias for the namespace Mathematics
namespace Math = Mathematics;
int main() {
    int result = Math::add(5, 3); // Using the alias to call the add function
    std::cout << "Result: " << result << std::endl; // Output: Result: 8
    return 0;
}
