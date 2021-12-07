/*
Initialize and Display array elements.
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/9/21
This program initializes the contents of an array with different values using loops.
*/
#include <iostream>
#include <cmath>

using namespace std;

// function prototype
void initArray(double arr[]);
void dispArray(double arr[]);

int main()
{
    // declare array alpha with 50 elements.
    double alpha[50];

    // call initArray with alpha argument
    initArray(alpha);

    // call dispArray with alpha argument
    dispArray(alpha);

    return 0;
}
// function definition
void initArray(double arr[])
{
    // for the first 25 elements, make them equal to the square of the increment.
    for (int i; i<25; i++)
    {
        arr[i] = sqrt(i);
    }
    // for the next 25 elements, make them equal to the increment times 3.
    for (int c = 25; c<50; c++)
    {
        arr[c] = c * 3;
    }
}
// display the results.
void dispArray(double arr[])
{

    // display the contents of arr 50 times.
    for (int x; x<50; x++)
    {
        cout << arr[x] << " ";

        // if x can be evenly divided by 10, end the line.
        if (x % 10 == 0 && x != 0)
        {
            cout << endl;
        }
    }
}
