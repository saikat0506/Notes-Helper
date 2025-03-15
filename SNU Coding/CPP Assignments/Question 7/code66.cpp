/*
Create a class Person with private attributes name (string) and age (int). Implement public getter and setter member functions for both attributes. Write a program to create an object of the Person class, set the attributes, and display them using the getter functions. [ Encapsulation with Getters and Setters ]
*/

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setter(string n, int a)
    {
        name = n;
        age = a;
    }

    void getter()
    {
        cout << "The name of the person is: " << name << endl;
        cout << "The age of the person is: " << age << endl;
    }
};

int main()
{
    string n;
    int a;
    cout << "Enter the name of the person: ";
    cin >> n;
    cout << "Enter the age of the person: ";
    cin >> a;

    Person p;
    p.setter(n, a);
    p.getter();

    return 0;
}
