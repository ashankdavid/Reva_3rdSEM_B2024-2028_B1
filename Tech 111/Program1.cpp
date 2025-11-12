#include <iostream>
using namespace std;

class Volume {
public:
    // Function to calculate volume of cube
    int volume(int side) {
        return side * side * side;
    }

    // Function to calculate volume of rectangular box
    double volume(double length, double width, double height) {
        return length * width * height;
    }

    // Function to calculate volume of cylinder (with default height)
    double volume(double radius, int height = 5) {
        const double pi = 3.14;
        return pi * radius * radius * height;
    }
};

int main() {
    Volume v;

    cout << "volume of the cube with side:3 is: " << v.volume(3) << endl;

    cout << "\nvolume of the rectangle with length:4,width:5,height:6 is: "
         << v.volume(4.0, 5.0, 6.0) << endl;

    cout << "\nvolume of the cylinder with radius:2 and height:6 is: "
         << v.volume(2.0, 6) << endl;

    return 0;
}
