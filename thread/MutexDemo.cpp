//
// Created by archana-kumari on 11/3/26.
//
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
mutex mtx; // Mutex for synchronizing access to shared resources
int sharedResource = 0; // Shared resource to be protected by the mutex
void incrementResource(int id) {
    for (int i = 0; i < 5; ++i) {
        mtx.lock(); // Lock the mutex before accessing the shared resource
        ++sharedResource;
        cout << "Thread " << id << " incremented resource to " << sharedResource << endl;
        mtx.unlock(); // Unlock the mutex after accessing the shared resource
    }
}

int main() {
    thread t1(incrementResource, 1);
    thread t2(incrementResource, 2);

    t1.join();
    t2.join();

    cout << "Final value of shared resource: " << sharedResource << endl;
    return 0;
}