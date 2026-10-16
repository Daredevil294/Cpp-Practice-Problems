#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter the  number a : ";
    cin >> n;
    if (n > 0)
    {
        cout << " " << n << " is positve number.";
    }
    else if (n < 0)
    {
        cout << " " << n << " is negative number.";
    }
    else
    {
        cout << "The number is zero.";
    }

    return 0;
}