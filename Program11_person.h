#ifndef PERSON_H
#define PERSON_H


#include <iostream>

using namespace std;


class person
{
    public:
        // constructor.
        person(string aFirstName, string aMiddleName, string aLastName, int birthYear);
        // destructor.
        virtual ~person();

        //mutator
        void setFirstName(string aName);
        void setMiddleName(string aName);
        void setLastName(string aName);
        void setBirthYear(int aYear);
        void displayInfo();
        void displayAge();
        // accessor
        string getFirstName();
        string getMiddleName();
        string getLastName();
        int getBirthYear();




    private:
        // private variables.
        string firstName;
        string middleName;
        string lastName;
        int birthYear;
};

#endif // PERSON_H
