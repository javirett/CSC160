/*
Is the number Positive, Negative or Zero?
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/6/21
This program determines if the number entered is positive, negative, or zero.
*/

#include <iostream>

using namespace std;

// global variable and function declarations
int number;
void calcResult(int a);

// entry point
int main()
{
    // prompt user for number.
   cout << "Enter a number: " << endl;
   cin >> number;

    // call calcResult function with 1 argument
   calcResult(number);

   return 0;
}

    // function definition
void calcResult(int a)
{
    // if statement to determine if the number is less than, greater than, or equal to zero.
    if (a > 0)
    {
        cout << "The number is positive." << endl;
    }
    if (a == 0)
    {
        cout << "The number is " << a << endl;
    }
    if (a < 0)
    {
        cout << "The number is negative." << endl;
    }
}
