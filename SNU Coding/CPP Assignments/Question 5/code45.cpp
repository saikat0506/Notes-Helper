/*
Create a class Student with a private member function showDetails(). Write a public member function to set student details and call the private member function to display them. Write a program to create an object of the Student class, set details, and display them.
*/

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
        showDetails();
    }

private:
    void showDetails()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The rollnumber of the student is " << rollnumber << endl;
        cout << "The grade of the student is " << grade << endl;
    }
};

int main()
{
    string n;
    int i, g;
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the roll number of the student: ";
    cin >> i;
    cout << "Enter the grade of the student: ";
    cin >> g;
    student s(n, i, g);
    return 0;
}