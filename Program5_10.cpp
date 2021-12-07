/*
Largest & Smallest.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/12/21
This program has the user enter a series of numbers, than determines which number is greatest and which number is less.
*/


#include <iostream>

using namespace std;

// variable and function declaration.
int num;
int mini = 9999;
int maxi = 0;
void calcResult(int &a, int &b, int &c);

// main function
int main()
{
    // prompt user to enter numbers.
    cout << "Enter a series of numbers (-99 to end the sequence): " << endl;
    // call calcResult function with 3 arguments.
    calcResult(num, mini, maxi);
    // after calcResult, display the greatest and smallest numbers.
    cout << "Highest Number: " << maxi << endl;
    cout << "Lowest Number:" << mini << endl;


    return 0;
}

// function definition
void calcResult(int &a, int &b, int &c)
{
    // do while loop has user enter a number, than if statements determine if the number is big or small. loop exits when user enters -99.
    do
    {
        cin >> num;

        if (num > maxi)
        {
            maxi = num;
        }

        if (num < mini)
        {
            mini = num;
        }

    } while (num != -99);
}
