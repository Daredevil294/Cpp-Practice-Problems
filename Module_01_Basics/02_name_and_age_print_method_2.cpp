#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Hello" << " " << name << "," << "you are" << " " << age << " years old." << endl;
    return 0;
}