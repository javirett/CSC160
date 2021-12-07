/*
Program 5
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/6/21
Takes 3 values and determines if the triangle is a right triangle.
*/

#include <iostream>
#include <cmath>


using namespace std;

    // function and global variable delcaration
void calcResult(double &a, double &b, double &c);
double sideA;
double sideB;
double sideC;

int main()
{
        // prompt user for 3 sides
    cout << "Enter the length for 3 sides: " << endl;
    cin >> sideA >> sideB >> sideC;
        // call calcResult function with 3 arguments.
    calcResult(sideA, sideB, sideC);

    return 0;
}
    // function definition, passing variable by reference.
void calcResult(double &a, double &b, double &c)
{

    // declare local variable
    double sum;

    // square each variable.
    pow(a, 2);
    pow(b, 2);
    pow(c, 2);

    sum = b + c;


    // if statement to determine if the a side is equal to the sum of the other two sides.
    if (a == sum)
    {
        cout << "The triangle is a right triangle. " << endl;
    }
    else
    {
        cout << "The triangle is not a right triangle." << endl;
    }
}

