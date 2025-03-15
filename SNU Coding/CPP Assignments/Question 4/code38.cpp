/*
Create a class Employee with attributes name (string) and salary (double). Implement a parameterized constructor that initializes name and salary based on user input. Write a program to create an object of the Employee class and display the employee information.
*/

#include <iostream>
using namespace std;

class employee
{
public:
    string name, department;
    int id, salary;
    employee(string n, string d, int i, int s)
    {

        name = n;
        department = d;
        id = i;
        salary = s;
    }
    void display();
};

void employee ::display()
{
    cout << "The name of the employee is " << name << endl;
    cout << "The department of the employee is " << department << endl;
    cout << "The id of the employee is " << id << endl;
    cout << "The salary of the employee is " << salary << endl;
}

int main()
{
    string n, d;
    int i, s;
    cout << "Enter the name of the employee: ";
    cin >> n;
    cout << "Enter the department of the employee: ";
    cin >> d;
    cout << "Enter the ID of the employee: ";
    cin >> i;
    cout << "Enter the salary of the employee: ";
    cin >> s;
    employee e(n, d, i, s);
    e.display();
    return 0;
}