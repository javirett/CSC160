#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    // declare function
void calcResult(int a);



    // entry point
int main()
{
    // generate random number
    srand(time(NULL));
    int number = rand() % 50 + 1;
    // display number
    cout << "The random number is: " << number << endl;
    // call function calcResult with number argument
    calcResult(number);

    return 0;
}
// function definition
void calcResult(int a)
{
    // if statement to determine if number is greater, lesser or equal to 25.
    if (a < 25)
    {
        cout << "Less than 25." << endl;
    }
    if (a == 25)
    {
        cout << "Luck you!" << endl;
    }
    if (a > 25)
    {
        cout << "Greater than 25" << endl;
    }
}
