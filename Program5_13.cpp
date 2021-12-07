/*
Multiplication Table
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/12/21
This program displays a multiplication table based up to 12 based on the number entered.
*/

#include <iostream>

using namespace std;

// variable & function declaration
int num;
int product;
void calcResult(int &a, int &b);

int main()
{
    // prompt user for number
    cout << "Enter a number: " << endl;
    // enter number
    cin >> num;
    // call calcResult function with 2 arguments
    calcResult(num, product);

    return 0;
}

// function defnition
void calcResult(int &a, int &b)
{
    // loop for every increment, multiply num and the number of increments.
    for (int i; i <= 12; i++)
    {
        product = num * i;
        // display results.
        cout << num << " * " << i << " = " << product << endl;
    }
}
