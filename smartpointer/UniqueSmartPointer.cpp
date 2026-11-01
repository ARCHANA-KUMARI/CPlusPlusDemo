//
// Created by archana-kumari on 11/1/26.
//
using namespace std;

#include "iostream"
#include "memory"

class CameraDevice {
public:
    CameraDevice() {
        std::cout << "Camera Device Created\n";
    }

    ~CameraDevice() {
        std::cout << "Camera Device Destroyed\n";
    }

    void start() {
        std::cout << "Camera Started\n";
    }
};

int main() {
    std::unique_ptr<CameraDevice> camera =
            std::make_unique<CameraDevice>();

    camera->start();

    return 0;
}