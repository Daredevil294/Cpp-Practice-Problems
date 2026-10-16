#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of first" << " " << n << " natural numbers is " << sum << "." << endl;
    return 0;
}