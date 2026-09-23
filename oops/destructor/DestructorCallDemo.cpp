//
// Created by archana-kumari on 9/24/26.
//
#include <iostream>

using namespace std;

int Count = 0;

class Test {
public:
    Test() {

        // Number of times constructor is called
        Count++;
        cout << "No. of Object created: "
             << Count << endl;
    }

    ~Test() {

        // It will print count in decending order
        cout << "No. of Object destroyed: " << Count
             << endl;
        Count--;
    }
};

int main() {
    Test t, t1, t2, t3;
    return 0;
}