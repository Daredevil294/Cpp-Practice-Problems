#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter the name: ";
    getline(cin, name);
    cout << "Enter the age: ";
    cin >> age;
    cout << "Hello" << " " << name << "," << "you are" << " " << age << " years old." << endl;
    return 0;
}