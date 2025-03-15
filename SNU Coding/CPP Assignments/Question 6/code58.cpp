/*
Create a base class Person with a protected attribute name (string). Create a derived class Employee from Person with an additional private attribute employeeID (string). Write a program to create an object of the Employee class, set its attributes, and display the name (inherited from Person) and the employee ID.
*/

#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "The name of the person is: " << name << endl;
    }
};

class Employee : public Person
{
private:
    int employeeID;

public:
    Employee(string n, int eID) : Person(n)
    {
        employeeID = eID;
    }

    void displayEmployee()
    {
        displayName();
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
    e.displayEmployee();

    return 0;
}