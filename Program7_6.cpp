/*
Menu based program
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
This program generates a random number and allows the user to modify it using an option based menu.
*/



#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

// function declaration
int aFunction(int &num);
int bFunction(int &num);
int cFunction(int &num);
int dFunction(int &num);
int eFunction(int &num);
int fFunction(int &num);


int main()
{
    // seed random number
    int seed = time(0);

    srand (seed);

    // generate random number between 10 and 100.
    int randNum = rand() % 10 + 100;

    char option;
    // loop while the option is not 'x'
    while (option != 'x')
    {
        int result;
        // display the number
        cout << "Your number is: " << randNum << endl;
        cout << endl;

        // display the users actions.
        cout << "Enter your action: " << endl;
        cout << "a. Double the number. b. Reverse the digits c. Raise the number to the power of 2, 3, or 4." << endl;
        cout << "d. Sum the digits of the number. e. Raise the first digit to the power of the second." << endl;
        cout << "f. If the number is 3 digits and the last digit is less than or equal to 4, " << endl;
        cout << "   then raise the first two digits to the power of the last." << endl;
        cout << "x. To exit the program." << endl;

        cin >> option;

        // option calls function
        switch (option)
        {
            case 'a':
                result = aFunction(randNum);
            break;
            case 'b':
                result = bFunction(randNum);
            break;
            case 'c':
                result = cFunction(randNum);
            break;
            case 'd':
                result = dFunction(randNum);
            break;
            case 'e':
                result = eFunction(randNum);
            break;
            case 'f':
                result = fFunction(randNum);
            break;
        }
    }
}
// doubles the number.
int aFunction(int &num)
{
    num *= 2;

    return num;
}
// reverse the digits
int bFunction(int &num)
{
    string numStr = to_string(num);

    int length = numStr.length();

    for (int i = 0; i < length/2; i++)
    {
        swap(numStr[i], numStr[length - i - 1]);
    }

    cout << "result is: " << numStr << endl;

    num = stoi(numStr);

    return num;

}
//raise number to power.
int cFunction(int &num)
{
    bool loop = true;

    while (loop != false)
    {
        int option;
        int result;

        cout << "Choose the power to raise too:" << endl;
        cout << "2, 3, or 4." << endl;
        cin >> option;

        if (option == 2)
        {
            result = pow(num, 2);
            loop = false;
        }
        if (option == 3)
        {
            result = pow(num, 3);
            loop = false;
        }
        if (option == 4)
        {
            result = pow(num, 4);
            loop = false;
        }
        else
        {
            cout << "Invalid input. Try again." << endl;
            loop = true;
        }
    }
    return num;
}
//sum digits of numbers
int dFunction(int &num)
{
    string numStr = to_string(num);

    int length = numStr.length();

    cout << "NumStr is: " << numStr << endl;

    /*for (int i; i < length; i++)
    {

    }
    */
    return num;
}
// raise first digit to the second
int eFunction(int &num)
{
    //if (num >= 10)

    // pow (first digit, second digit)
}
// raise
int fFunction(int &num)
{
   // if (num > 100) // && last digit >= 4)

    // pow (first digit, last digit)
    // pow (second digit, last digit)

}
