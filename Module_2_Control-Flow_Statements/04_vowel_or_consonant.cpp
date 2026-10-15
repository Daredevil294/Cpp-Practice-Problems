#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the English alphabet: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'A':
        cout << " " << ch << " is vowel." << endl;
        break;
    case 'e':
    case 'E':
        cout << " " << ch << " is vowel." << endl;
        break;
    case 'i':
    case 'I':
        cout << " " << ch << " is vowel." << endl;
        break;
    case 'o':
    case 'O':
        cout << " " << ch << " is vowel." << endl;
        break;
    case 'u':
    case 'U':
        cout << " " << ch << " is vowel." << endl;
        break;
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch <= 'A' && ch >= 'Z'))
        {
            cout << " " << ch << " is a consonant.";
        }
        else
        {
            cout << "Invalid input! Please enter an English alphabet.";
        }
        break;
    }
    return 0;
}