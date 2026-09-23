//
// Created by archana-kumari on 9/23/26.
//
#include <iostream>

using namespace std;

class Test {
public:

    // User-Defined Constructor
    Test() {
        cout << "Constructor Called"
             << endl;
    }

    // User-Defined Destructor
    ~Test() {
        cout << "Destructor Called"
             << endl;
    }
};

int main() {
    Test t;

    return 0;
}