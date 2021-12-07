/*
Pennies for Pay
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/12/21
This program calculates the number of pennies paid to an employee each day, then adds the total.
*/



#include <iostream>

using namespace std;


    // variable declaration
int days;
double total;
double pennies = 0.01;
double INC_VALUE = 2.00;
void calcSalary(int a, double b, double c);

// main function

int main()
{
    // prompt user to enter # of days.
    cout << "Enter the number of days: " << endl;
    cin >> days;
    // call function calcSalary with 3 arguments.
    calcSalary(days, pennies, INC_VALUE);
    // display the total for days.
    cout << "The total for " << days << " days is: $" << total << endl;

    return 0;
}


// function definition
void calcSalary(int a, double b, double c)
{
    // condition check to determine if the user input is valid.
    if (days >= 1)
    {
        // create for loop, incrementing i if its less than or equal to days.
        for (int i = 1; i <= days; i++)
        {
            // multiply pennies by 2
            pennies *= INC_VALUE;
            // make the total equal to the sum of total and pennies.
            total += pennies;
            // display the day, the amount earned.
            cout << "Day " << i << ": $" << pennies << endl;
        }

    }
    else
    {
        cout << "Invalid number of days!" << endl;
    }

}
