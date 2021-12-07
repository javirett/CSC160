/*
Triangle Shape Calculator
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
This program takes 3 numbers from the user and then determines the shape of the triangle.
*/


#include <iostream>

using namespace std;

// function declaration
void triangleShape(double sideA, double sideB, double sideC);

int main()
{
    // variable declaration
    double num1, num2, num3;

    // prompt to enter 3 numbers.
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    // calculate triangle shape with 3 data points.
    triangleShape(num1,num2,num3);

}


void triangleShape(double sideA, double sideB, double sideC)
{
    // declare an enum type triangleType with the values of SCALENE, ISOSCELES, EQUILATERAL, NO_TRIANGLE
    enum triangleType {SCALENE, ISOSCELES, EQUILATERAL, NO_TRIANGLE};

    // declare variable of enum type triangleType
    triangleType result;

    // determine the result.
    // if the sides are all equal, then triangle is equilateral.
    if (sideA == sideB && sideB == sideC)
    {
        result = EQUILATERAL;
        cout << "Triangle is equilateral" << endl;
    }
    // if two sides are equal, then triangle is Isosceles.
    if (sideA == sideB || sideA == sideC || sideB == sideC)
    {
        result = ISOSCELES;
        cout << "Triangle is isosceles" << endl;
    }
    // if else, the triangle is scalene.
    else
    {
        result = SCALENE;
        cout << "Triangle is scalene" << endl;
    }
}
