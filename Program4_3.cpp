/*
Program 3
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/6/21
Takes an integer, if its less than or equal to 9 its displays the number, else, it displays the alphabet.
*/

#include <iostream>

using namespace std;

    // variable and function declaration.
void calcResult(int x);
int number;

    // entry point
int main()
{

    // prompt user for integer value.
    cout << "enter an integer between 0 and 35: " << endl;
    cin >> number;
    // call calcResult function with number argument.
    calcResult(number);

    return 0;
}

    // function definition.
void calcResult(int x)
{
    // if x is less than or equal to 9, display number
    if (x <= 9)
    {
        cout << "Your number is: " << x << endl;
    }
    else
    {
        // otherwise, display the the converted value of x to a character starting at A from 10.
        cout << static_cast<char>(x - 10 + 'A')<< endl;
    }
}
