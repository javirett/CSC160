#include "person.h"

person::person()
{
    //ctor
}

person::~person()
{
    //dtor
}


//mutators.
void person::setFirstName(string aName)
{
    firstName = aName;
}
void person::setMiddleName(string aName)
{
    middleName = aName;
}
void person::setLastName(string aName)
{
    lastName = aName;
}
void person::setBirthYear(int aYear)
{
    birthYear = aYear;
}
// display function
void person::displayInfo()
{
    cout << "Your name is " << firstName << " " << middleName << " " << lastName << endl;
    cout << "Year of birth: " << birthYear << endl;
}
// display age function
void person::displayAge()
{
    cout << "Age: " << 2021 - birthYear << endl;
}



//accessors
int person::getBirthYear()
{
    return birthYear;
}
string person::getFirstName()
{
    return firstName;
}
string person::getMiddleName()
{
    return middleName;
}
string person::getLastName()
{
    return lastName;
}
