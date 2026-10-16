#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the month number: ";
    cin >> month;
    switch (month)
    {
    case 1:
    case 2:
    case 12:
        cout << " " << month << " is winter." << endl;
        break;
    case 3:
    case 4:
        cout << " " << month << " is spring." << endl;
        break;
    case 5:
    case 6:
        cout << " " << month << " is summer." << endl;
        break;
    case 7:
    case 8:
    case 9:
        cout << " " << month << " is monsoon." << endl;
        break;
    case 10:
    case 11:
        cout << " " << month << " is autumn." << endl;
        break;
    default:
        cout << "Only 12 months are present in the Gregorian calender." << endl;
        break;
    }
    return 0;
}