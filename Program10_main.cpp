/*
Program 10
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/20/21
This program creates the object "person", initializes the variables inside
with mutators, then displays the information stored.
*/

#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    // variable declaration
    string firstName, middleName, lastName;
    int birthYear;
    // prompt for input.
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << endl;
    cout << "Enter your middle name: ";
    cin >> middleName;
    cout << endl;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << endl;

    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << endl;

    // declare object.
    person psn;

    // use mutators to access the the private variables.
    psn.setFirstName(firstName);
    psn.setMiddleName(middleName);
    psn.setLastName(lastName);
    psn.setBirthYear(birthYear);

    // display the object info.
    psn.displayInfo();
    psn.displayAge();


    return 0;
}

