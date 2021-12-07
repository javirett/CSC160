/*
Initialize and Display array elements.
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/9/21
This program initializes the contents of an array with different values using loops.
*/


#include <iostream>
#include <iomanip>

using namespace std;

// function prototype
void getInput(string candidates[], int noVotes[], int SIZE);
int calcTotal(int noVotes[], int SIZE);
void calcPercent(int noVotes[], float percTotalVote[], int total, int SIZE);
void dispResults(string candidates[], int noVotes[], float percTotalVote[], int total, int SIZE);

int main()
{
    // constant size variable
    const int SIZE = 5;

    // total
    int total = 0;


    // array declaration
    string candidates[SIZE];
    int noVotes[SIZE];
    float percTotalVote[SIZE];

    // call getInput
    getInput(candidates, noVotes, SIZE);

    // call getTotal
    total = calcTotal(noVotes, SIZE);

    // call calcPercent
    calcPercent(noVotes, percTotalVote, total, SIZE);

    // call dispResults
    dispResults(candidates, noVotes, percTotalVote, total, SIZE);


    return 0;
}
// function definition
void getInput(string candidates[], int noVotes[], int SIZE)
{
    // prompt to input data.
    cout << "Enter the candidates names and their votes." << endl;

    for (int i = 0; i <SIZE; i++)
    {
        cout << "Enter the candidate name: ";
        cin >> candidates[i];
        cout << endl;
        cout << "Enter the the number of votes for that candidate: ";
        cin >> noVotes[i];
        cout << endl;
    }
}
// determine the total
int calcTotal(int noVotes[], int SIZE)
{
    int total;

    for (int i = 0; i<SIZE; i++)
    {
        total += noVotes[i];
    }
    total += 1;

    return total;
}
// calculate the percentage of votes
void calcPercent(int noVotes[], float percTotalVote[], int total, int SIZE)
{

    float newTotal = static_cast<float>(total);

    for (int i = 0; i<SIZE; i++)
    {
        percTotalVote[i] = (newTotal / noVotes[i]);
    }
}
// display the results.
void dispResults(string candidates[], int noVotes[], float percTotalVote[], int total, int SIZE)
{
    for (int i = 0; i<SIZE; i++)
    {
        cout << candidates[i] << setw(10) << noVotes[i] << setw(10) << showpoint << percTotalVote[i] << endl;
    }

    cout << "Total: " << total << endl;
}
