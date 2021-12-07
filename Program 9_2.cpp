/*
Grading Program
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/17/21
This program takes the names, and test scores of 20 students, then determines the grades and the highest scorer.
*/


#include <iostream>

using namespace std;

// struct definition.
struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    string grade;
};
// function prototypes.
void getInput(studentType students[], int SIZE);
void assignGrade(studentType students[], int SIZE);
string highestScore(studentType students[], int SIZE);
void arrSwap(int &a, int &b);
void bubbleSort(studentType arr[], int SIZE);
void printHighScore(string highScorer);


int main()
{
    // local variable and constant declaration
    const int SIZE = 20;

    studentType students[SIZE];

    // call get input.
    getInput(students, SIZE);

    cout << "Data allocated\n Back in main." << endl;
    // call assignGrade
    assignGrade(students, SIZE);

    cout << "Grades assigned\n Back in main." << endl;

    cout << "Determining highest score..." << endl;

    // call highestScore
    string highScorer = highestScore(students, SIZE);

    cout << "Score determined.\n Back in main.\n" << endl;

    // call printHigheScore
    printHighScore(highScorer);



    return 0;
}
// loop and get the data for all the students.
void getInput(studentType students[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the student " << i << " first name: ";
        cin >> students[i].studentFName;
        cout << endl;
        cout << "Enter student " << i << " last name:  ";
        cin >> students[i].studentLName;
        cout << endl;
        cout << "Enter student " << students[i].studentFName << " " << students[i].studentLName << "'s test score: ";
        cin >> students[i].testScore;
        cout << endl;
    }
}
// goes through the array and determines the letter grade
void assignGrade(studentType students[], int SIZE)
{
    cout << "Assigning grades..." << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (students[i].testScore >= 90 && students[i].testScore <= 100)
        {
            students[i].grade = "A";
        }
        else if (students[i].testScore >= 80 && students[i].testScore < 90)
        {
            students[i].grade = "B";
        }
        else if (students[i].testScore >= 70 && students[i].testScore < 80)
        {
            students[i].grade = "C";
        }
        else if (students[i].testScore >= 60 && students[i].testScore < 70)
        {
            students[i].grade = "D";
        }
        else if (students[i].testScore > 50 && students[i].testScore < 60 || students[i].testScore < 50)
        {
            students[i].grade = "F";
        }

        cout << students[i].studentFName << " " << students[i].studentLName << " grade: " << students[i].grade << endl;
    }
}
// swap function for both strings and integers
void arrSwap(string &a, string &b)
{
    cout << "Swapping " << a << " with " << b;
    cout << endl;

    string temp;

    temp = a;
    a = b;
    b = temp;
}
void arrSwap(int &a, int &b)
{
    cout << "Swapping " << a << " with " << b;
    cout << endl;

    int temp;

    temp = a;
    a = b;
    b = temp;
}
void bubbleSort(studentType arr[], int SIZE)
{
    cout << "Sorting elements..." << endl;

    int maxElem;

    // decrement max element for each loop.
    for (maxElem = SIZE - 1; maxElem >= 0; maxElem--)
    {
        // display counter
        for (int c; c <= SIZE - 1; c++)
        {
            cout << "{ " << c << " }" << endl;
        }
        // go through each element of the array and swap depending on value.
        for (int i = 0; i < maxElem; i++)
        {
            if (arr[i].testScore > arr[i + 1].testScore)
            {
                arrSwap(arr[i].testScore, arr[i + 1].testScore);
                arrSwap(arr[i].studentFName, arr[i + 1].studentFName);
                arrSwap(arr[i].studentLName, arr[i + 1].studentLName);
                arrSwap(arr[i].grade, arr[i + 1].grade);
            }
        }
    }
    // display the sorted array.
    cout << "Displaying sorted array..." << endl;

    for (int x = 0; x < SIZE; x++)
    {
        cout << arr[x].studentFName << " " << arr[x].studentLName << ": " << arr[x].grade << " " << arr[x].testScore << endl;
    }
}
// find the highest score in the array
string highestScore(studentType students[], int SIZE)
{
    bubbleSort(students, SIZE);



    string fName = students[19].studentFName;
    string lName = students[19].studentLName;

    string highScorer = fName + " " + lName;

   return highScorer;
}
// display the high score.
void printHighScore(string highScorer)
{
    cout << "The highest scorer is: " << highScorer << endl;
}
