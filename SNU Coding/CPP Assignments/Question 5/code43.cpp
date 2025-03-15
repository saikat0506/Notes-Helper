/*
Create a class Employee with a protected attribute salary (double). Write a program to create a derived class Manager from Employee, set the salary using a public member function, and display it. [ Protected Access Specifier ]
*/

#include <iostream>
using namespace std;

class Employee
{
protected:
    double salary;

public:
    Employee(int s)
    {
        salary = s;
    }
};

class manager : public Employee
{
    double salary;

public:
    manager(int s) : Employee(s)
    {
        salary = s;
    }
    void display()
    {
        cout << "Salary is: " << salary << endl;
    }
};

int main()
{
    double s;
    cout << "Enter salary: ";
    cin >> s;
    manager m(s);
    m.display();
}