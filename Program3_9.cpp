/*
Cylinder to Cube Side Calculator
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 9/29/21
This program takes the radius and height of a cylinder, then outputs the side of a cube with same volume.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

// declare variables and functions
void calcVolume(double PI, double radius, double height);
const double PI = 3.14;
double radius;
double height;

using namespace std;
// entry point
int main()
{   // prompt user for radius and height.
    cout << "Enter the radius of the base: " << endl;
    cin >> radius;
    cout << "Enter the height: " << endl;
    cin >> height;
    // call function calcVolume with 3 arguments.
    calcVolume(PI, radius, height);

    return 0;
}

    // function definition
void calcVolume(double PI, double radius, double height)
{   // declare local variables.
    double volume;
    double side;

    // calculate volume with formula
    volume = PI * (radius * radius) * height;
    // calculate the side with formula
    side = pow(volume, .33);
    // display results.
    cout << setw(5) << left << setprecision(2) << "The side of the cube is: " << side << endl;

}
