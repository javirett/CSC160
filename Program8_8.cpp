/*
Multi Dimensional Arrays
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/10/21
This program tests the three functions written to initialize and copy data to and from arrays.
*/

#include <iostream>

using namespace std;

// constant SIZE and column declaration.
const int SIZE = 20;
const int COL = 4;
// function prototype
void inputArray(int alpha[]);
void doubleArray(int alpha[], int beta[]);
void copyAlphaBeta(int alpha[], int beta[], int matrix[][COL]);
void printArray(int arr[], int SIZE);

int main()
{

    // array declaration.
    int alpha[SIZE];
    int beta[SIZE];
    int matrix[10][4];

    // call inputArray with alpha argument
    inputArray(alpha);

    cout << "Initializing beta array..." << endl;
    // call doubleArray with alpha and beta argument.
    doubleArray(alpha, beta);

    cout << "Beta initialized!" << endl;
    cout << "Copying data from alpha and beta to the first 10 rows of matrix..." << endl;

    // call copyAlphaBeta function with alpha beta and matrix arrays.
    copyAlphaBeta(alpha, beta, matrix);

    cout << "Data copied!" << endl;

    cout << "Displaying Alpha array elements..." << endl;

    // call print array with alpha and size argument.
    printArray(alpha, SIZE);

    cout << "Displaying Beta array elements..." << endl;

    // call print array with beta and size argument
    printArray(beta, SIZE);

    cout << "Exiting..." << endl;





    return 0;

}
// function definitions
void inputArray(int alpha[])
{
    for (int i; i<20; i++)
    {
        // prompt user to enter a number for each index.
        cout << "enter number for alpha index: " << i << endl;
        cin >> alpha[i];
        cout << endl;
    }
}
void doubleArray(int alpha[], int beta[])
{
    for (int i; i<20; i++)
    {
        // initialize beta with the data from the element of alpha multiplied by two
        beta[i] = alpha[i] * 2;
    }
}
void copyAlphaBeta(int alpha[], int beta[], int matrix[][COL])
{
    // initialize the first 5 rows of matrix with the data from alpha.
    for (int i; i<5; i++)
    {
        matrix[i][0] = alpha[i];
    }
    // initialize the last 5 rows of matrix with the data from beta.
    for (int c; c<5; c++)
    {
        matrix[c][0] = beta[c];
    }
}
// takes a 1 dimensional array and the size, and prints the data stored at the index.
// will print 15 elements per line.
void printArray(int arr[], int SIZE)
{
    for (int i; i<SIZE; i++)
    {
        cout << arr[i] << " ";

        if (i % 15 == 0 && i != 0)
        {
            cout << endl;
        }
    }

    cout << endl;
}
