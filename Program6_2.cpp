/*
Is Char a Vowel?
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
This program takes a char and returns if its a vowel.
*/

#include <iostream>

using namespace std;

// function declaration
bool isVowel(char x);

int main()
{
    // variable declaration
    char input;

    // prompt for input
    cout << "Enter a character: ";
    cin >> input;
    cout << endl;

    // call function isVowel with user input.
    isVowel(input);

    return 0;
}

// function definition
bool isVowel(char x)
{
    // if character is a vowel, then print if its a vowel, and return true.s
    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
    {
        cout << x << " is a vowel.";
        cout << endl;
        return true;
    }

}
