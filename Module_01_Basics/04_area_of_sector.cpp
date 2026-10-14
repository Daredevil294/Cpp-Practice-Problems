#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r, angle;
    double pi = 3.14;
    double Area_Of_Sector;
    cout << "Enter the radius: " << endl;
    cin >> r;
    cout << "Enter the angle in degree: " << endl;
    cin >> angle;

    Area_Of_Sector = (angle / 360) * pi * pow(r, 2); // pow(base,exponent)

    cout << "Area of sector = " << Area_Of_Sector << endl;

    return 0;
}