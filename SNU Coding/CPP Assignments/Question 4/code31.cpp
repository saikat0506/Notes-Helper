/*
Create a class Student with attributes name (string) and rollNumber (int). Implement a default constructor that initializes name to an empty string and rollNumber to 0. Write a program to create an object of the Student class and display its attributes.
*/

#include <iostream>
using namespace std;

class student
{
    string name;
    int rollnumber, grade;

public:
    student(void);
    void display()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The rollnumber of the student is " << rollnumber << endl;
        cout << "The grade of the student is " << grade << endl;
    }
};

student ::student(void)
{
    name = "Shuvom";
    rollnumber = 1043;
    grade = 90;
}

int main()
{
    student s;
    s.display();
    return 0;
}