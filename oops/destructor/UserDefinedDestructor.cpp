//
// Created by archana-kumari on 9/23/26.
//
#include <iostream>
using namespace std;

class MyClass {
private:

    // Pointer to dynamically
    // allocated memory
    int* data;

public:
    MyClass(int value) {
        data = new int;
        *data = value;
        cout << *data << endl;
    }

    // User-defined destructor: Free
    // the dynamically allocated memory
    ~MyClass() {

        // Deallocate the dynamically
        // allocated memory
        delete data;
        cout << "Destructor: Memory deallocated"<<endl;
    }
};

int main() {
    MyClass obj1(10);
    return 0;
}