/* Create a class called Student with attributes name (string) and grade (int). Write a program to create an array of Student objects, set their attributes, and display the student  information. */

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollnumber, grade;
    student(string n, int i, int g)
    {
        name = n;
        rollnumber = i;
        grade = g;
    }
    void display();
};

void student ::display()
{
    cout << "The name of the student is " << name << endl;
    cout << "The rollnumber of the student is " << rollnumber << endl;
    cout << "The grade of the student is " << grade << endl;
}

int main()
{
    student s("Shuvom", 1043, 90);
    s.display();
    return 0;
}