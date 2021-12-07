/*
How Many Vowels?
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
This program takes string and returns how many vowels are in the string.
*/

#include <iostream>

using namespace std;

// function declaration.
int numOfVowels(string str);

int main()
{
    // declare string and result.
    string str;
    int result;

    // prompt for input.
    cout << "Enter a string: ";
    getline(cin, str);
    cout << endl;

    // call numOfVowels with str argument.
    cout << "Number of vowels: " << numOfVowels(str) << endl;

    return 0;
}

int numOfVowels(string str)
{
    // variable declaration
    int noVowels = 0;

    // length is equal to str length
    int length = str.length();

    // increment for each character, if the character is a vowel, then increment the noVowels variable by 1.s
    for (int c = 0; c<length; c++)
    {
        char x = str[c];

        if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
            noVowels++;

    }

    return noVowels;
}
