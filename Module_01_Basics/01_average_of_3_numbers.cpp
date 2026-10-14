#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    double sum;
    double average;
    cout << "Enter the number: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    average = sum / 3;
    cout << "Sum = " << sum << endl;
    cout << "Avarage = " << average;

    return 0;
}