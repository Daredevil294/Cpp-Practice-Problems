
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character ----->>>>>> ";

    cin >> ch;
    if (ch <= 90 && ch >= 65)
    {
        cout << " " << ch << " is character uppercase.";
    }
    else if (ch <= 122 && ch >= 97)
    {
        cout << " " << ch << " is character lowercase.";
    }
    else
    {
        cout << "This is not character uppercase or character lowercase.";
    }

    return 0;
}