#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << showpoint << fixed << setprecision(2) << endl;


    string entryLevelProgrammer = "Entry Level";
    string midLevelProgrammer = "Mid Level";
    string seniorLevelProgrammer = "Senior Level";

    float entryLevelPay = 65'000;
    float midLevelPay = 85'800;
    float seniorLevelPay = 110'000;
    float average;

    average = (entryLevelPay + midLevelPay + seniorLevelPay)/3;

    // calculate average pay

    cout << setw(12) << "Programs" << setw(12) << right << "Pay" << endl;
    cout << setw(12) << "------------" << setw(12) << right << "------------" << endl;
    cout << entryLevelProgrammer << setw(15) << right << entryLevelPay << endl;
    cout << midLevelProgrammer << setw(17) << right << midLevelPay << endl;
    cout << seniorLevelProgrammer << setw(15) << right << seniorLevelPay << endl;
    cout << "Average Pay: " << setw(13) << right << average << endl;



    return 0;
}
