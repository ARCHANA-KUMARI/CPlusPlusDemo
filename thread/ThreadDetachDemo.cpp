//
// Created by archana-kumari on 11/3/26.
//
using namespace std;

#include <iostream>
#include <thread>

void task() {
    cout << "Detached thread is running"<<endl;
}

int main() {
    thread t(task);
    t.detach();
    cout << "Main thread continues execution"<<endl;

    return 0;
}