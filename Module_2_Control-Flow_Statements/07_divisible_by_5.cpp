#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << " " << n << " is divisible by 5.";
    }
    else
    {
        cout << " " << n << " is not divisible by 5.";
    }
    return 0;
}
