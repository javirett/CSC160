/*
Kilograms to Pounds
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 9/29/21
This program converts a weight in kilograms to pounds
*/

#include <iostream>
#include <iomanip>

using namespace std;

// declare constants, variables, and functions.
void calcWeight(double value1, double value2);
const double CONV_FACTOR = 2.2046;
double weight;

// entry point
int main()
{
    // prompt user for weight
    cout << "Enter your weight (in kilograms): " << endl;
    cin >> weight;
    // call calcWeight function with two arguments.
    calcWeight(weight, CONV_FACTOR);

    return 0;
}


// function definitions
void calcWeight(double value1, double value2)
    {   // declare local variable
        double newWeight;
        // perform calculation on parameters.
        newWeight = value1/value2;
        // display result.
        cout << "Your weight in pounds is: " << fixed << setprecision(2) << newWeight << endl;
    }


