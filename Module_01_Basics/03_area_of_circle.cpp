#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r;
    double pi = 3.14;
    cout << "Enter the radius:";
    cin >> r;
    cout << "Area of circle = " << pi * pow(r, 2);
    return 0;
}