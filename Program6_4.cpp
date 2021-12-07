/*
Radius and Surface Area Calculator.
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
tis program determines the radius and surface area of a sphere based on the inputted radius.
*/

#include <iostream>
#include <cmath>

using namespace std;

// function declaration
double calcSurfaceArea(double r, double PI);
double calcVolume(double r, double PI);

int main()
{
    // constant and variable declaration.
    const double PI = 3.14159;
    double r;
    double result1;
    double result2;

    // display the value of PI
    cout << "The value of PI is " << PI << endl;

    // prompt to input radius.
    cout << "Input the the radius of a sphere: ";
    cin >> r;
    cout << endl;

    // call calcSurfaceArea and calcVolume functions with the radius and PI arguments.
    result1 = calcSurfaceArea(r, PI);
    result2 = calcVolume(r, PI);

    // display results
    cout << "Surface area is: " << result1 << endl;
    cout << "Volume is: " << result2 << endl;



    return 0;
}
// function definition
double calcSurfaceArea(double r, double PI)
{
    double rSqr = pow(r, 2);

    double result = (4.0*PI)*rSqr;

    return result;
}

double calcVolume(double r, double PI)
{
    // rcbed is equal to r to the power of 3.
    double rCbed = pow(r, 3);

    // result is equal to 4/3 * (PI * r^3)
    double result = (4.0/3.0) * (PI * rCbed);

    // return the result to result1.
    return result;
}

