//
// Created by archana-kumari on 9/27/26.
//

using namespace std;

#include <iostream>

class LandVehicle {
public:
    LandVehicle() {
        cout << "This is a Land Vehicle constructor" << endl;
    }

    void landInfo() {
        cout << "This is a LandVehicle" << endl;
    }

    ~LandVehicle() {
        cout << "LandVehicle destructor called" << endl;
    }
};

class WaterVehicle {
public:
    WaterVehicle() {
        cout << "This is a Water Vehicle constructor" << endl;
    }

    void waterInfo() {
        cout << "This is a WaterVehicle" << endl;
    }

    ~WaterVehicle() {
        cout << "WaterVehicle destructor called" << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    AmphibiousVehicle() {
        cout << "This is an Amphibious Vehicle constructor" << endl;
    }

    ~AmphibiousVehicle() {
        cout << "AmphibiousVehicle destructor called" << endl;
    }
};

int main() {
    AmphibiousVehicle myAmphibiousVehicle; // Creating an object of the derived class
    myAmphibiousVehicle.landInfo(); // Calling method from LandVehicle
    myAmphibiousVehicle.waterInfo(); // Calling method from WaterVehicle
    return 0;
}
