//
// Created by archana-kumari on 10/13/26.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Displaying the top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Popping the top element
    s.pop();
    cout << "After pop, top element: " << s.top() << endl; // Output: 20

    // Checking if the stack is empty
    if (!s.empty()) {
        cout << "Stack is not empty." << endl;
    }

    // Displaying the size of the stack
    cout << "Size of stack: " << s.size() << endl; // Output: 2

    return 0;
}