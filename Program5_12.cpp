/*
Calculating the Factorial of a Number
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/12/21
This program has the user enter a number, and then the factorial is calculated.
*/


#include <iostream>
using namespace std;

// declare variables and function
int num;
int a = 1;
int b;
void calcResult(int &num, int &a, int &b);

// main function
int main()
{
    // prompt to enter number
    cout << "Enter a number: " << endl;
    // input number
    cin >> num;
    // call calcResult function with 3 arguments
    calcResult(num, a, b);
    // display results
    cout << a << endl;

    return 0;
}
// function definition
void calcResult(int &num, int &a, int &b)
{       // for every increment. multiply a by the number of increments.
        for (int i = 1; i <= num; i++)
    {
        b = i;
        a *= b;

    }

}
