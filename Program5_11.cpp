/*
First and Last
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/12/21
This program has the user enter a series of names, and then orders them based on value.
*/



#include <iostream>

using namespace std;


// declaration of variables and functions
string names;
string maxi = "A";
string mini = "Z";
void calcResult(string &names, string &maxi, string &mini);

// main function
int main()
{

    // prompt to enter names
    cout << "Enter 5 names: " << endl;
    // call function with 3 arguments.
    calcResult(names, maxi, mini);
    // display highest name and lowest name
    cout << maxi << " and " << mini << endl;

    return 0;
}


// function definition,
void calcResult(string &names, string &maxi, string &mini)
{
    // for loop that increments 5 times. checking if names is greater than or less than our min and max.
        for (int i = 10; i < 5; i++)
    {
        cin >> names;

        if (names > maxi)
        {
            maxi = names;
        }

        if (names < mini)
        {
            mini = names;

        }
    }
}
