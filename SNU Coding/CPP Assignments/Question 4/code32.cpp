/*
Create a class Person with attributes name (string) and age (int). Implement a parameterized constructor that initializes name and age based on user input. Write a program to create an object of the Person class and display its attributes.
*/

#include <iostream>
using namespace std;

class person
{
public:
    string name, address;

    int age;
    person(string n, int a, string ad)
    {
        name = n;
        age = a;
        address = ad;
    }
    void display();
};

void person ::display()
{
    cout << "The name of the person is " << name << endl;
    cout << "The age of the person is " << age << endl;
    cout << "The address of the person is " << address << endl;
}

int main()
{
    string n, ad;
    int a;
    cout << "Enter the name of the person: ";
    cin >> n;
    cout << "Enter the age of the person: ";
    cin >> a;
    cout << "Enter the address of the person: ";

    cin >> ad;
    person p(n, a, ad);
    p.display();
    return 0;
}