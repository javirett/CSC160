#include <iostream>
#include <iomanip>

using namespace std;

void calcVolume (double value1, double value2);
double mass;
double density;


int main()
{

    cout << "Enter the mass in grams: " << endl;
    cin >> mass;
    cout << "Enter the density in grams per cubic centimeters: " << endl;
    cin >> density;

    calcVolume(mass, density);

    return 0;
}


void calcVolume (double value1, double value2)
{
    double volume;

    volume = value1/value2;

    cout << setw(5) << left << setprecision(2) << "The volume of the object is : " << volume << endl;

}
