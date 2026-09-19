//
// Created by archana-kumari on 9/19/26.
//
#include <iostream>
#include <thread>

using namespace std;

void task() {
    cout << "Hello from the thread!" << endl;
}

int main() {
    //thread thread_name(callable);
    thread t(task);

    t.join();

    cout << "Main thread finished.";

    return 0;
}