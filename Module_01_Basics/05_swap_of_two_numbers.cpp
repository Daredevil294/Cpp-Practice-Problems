#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    int temp;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;

    // Ex.-
    // a = 10,b = 20;
    //       a      b       temp
    //       10     20       10
    //       20     20       10
    //       20     10       10

    temp = a;
    a = b;
    b = temp;

    cout << "After the swaping the number a = " << a << " and b = " << b << endl;
    return 0;
}