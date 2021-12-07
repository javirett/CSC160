/*
Ascending Numbers
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/6/21
This takes 3 numbers and displays them in ascending order.
*/

#include <iostream>

using namespace std;

    // global variable declaration and function declaration
void calcResult(int a, int b, int c);
int number1, number2, number3;

int main()
{
    // prompt user for numbers
   cout << "Enter 3 numbers: " << endl;
   cin >> number1 >> number2 >> number3;


   // call calcResult function with the 3 numbers as arguments.

   calcResult(number1, number2, number3);



}

    // function definition.
void calcResult(int a, int b,int c)
{
    // if statement to determine which number is greater, and its position.
    if ( a < b && b < c)
    {
        cout << "The numbers in ascending order are: " << a << b << c;
    }
    if ( a > b && b > c )
    {
        cout << "The numbers in ascending order are: " << a << b << c;
    }
    if (a < b && b > c)
    {
        cout << "The numbers in ascending order are: " << a << c << b;
    }

}
