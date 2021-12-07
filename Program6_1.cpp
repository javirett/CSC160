/*
Is The String Palindrome? Case Insensitive.
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 10/27/21
This program takes a string from the user and returns if the string is palindrome. It also ignores cases.
*/

#include <iostream>
#include <string>

using namespace std;
// function declaration
bool isPalindrome(string str);

int main()
{
    // declare string and bool variable.
    string str;
    bool result;

    // prompt to enter str.
    cout << "Enter a string: ";
    cin >> str;

    // call isPalindrome function with str argument.
    result = isPalindrome(str);

    // if the result is greater than 0 than the string = palindrome.
    if (result > 0)
    {
        cout << "The string is palindrome.";
    }
    else
    {
        cout << "The string is not palindrome.";
    }


   return 0;
}




// function definition
bool isPalindrome(string str)
{
    // length is equal to the length of str.
    int length = str.length();

    // increment by 1 for each char in str.
    for (int c; c<length; c++)
    {
         char letter = str[c];
    // if the char is lowercase, make it uppercase.
         if (islower(letter))

           str[c] = toupper(letter);

    }

    // increment to determine if the char in string is not equal to the opposite char in the string.
    for (int i = 0; i < length / 2; i++)

        if (str[i] != str[length - 1 - i])

            return false;

}
