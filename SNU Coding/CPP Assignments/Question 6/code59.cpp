/*
Create a base class Person with a public attribute name (string). Create a derived class Employee from Person using private inheritance. Write a program to create an object of the Employee class, set its attributes, and attempt to access the name attribute directly (which should result in an error). [ Private Inheritance ]
*/

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    
    Person(string n)
    {
        name = n;
    }
};

class Employee : private Person
{
private:
    int employeeID;

public:
    Employee(string name, int eID) : Person(name)
    {
        employeeID = eID;
    }

    void displayName()
    {
        cout << "The name of the person is: " << name << endl;
        cout << "The ID of an employee is: " << employeeID << endl;
    }
};

int main()
{
    string name;
    int employeeID;

    cout << "Enter the name of the person: ";
    cin >> name;
    cout << "Enter the ID of the employee: ";
    cin >> employeeID;

    Employee e(name, employeeID);
    cout << "Employee's information :---" << endl;
    e.displayName();

    return 0;
}