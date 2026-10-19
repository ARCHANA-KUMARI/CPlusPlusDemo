//
// Created by archana-kumari on 10/19/26.
//
#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
};
int main(){
    Point p1 = {10, 20}; //Initialize a Point structure with x=10 and y=20
    cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << endl;
    return 0;
}