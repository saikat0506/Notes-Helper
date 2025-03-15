/*
Create a class Student with a private attribute name (string). Implement public member functions setName() and getName() to encapsulate access to the name attribute. Write a program to create an object of the Student class, set the name, and display it.
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void getName()
    {
        cout << "The name of the student is: " << name << endl;
    }
};

int main()
{
    Student s;
    string n;

    cout << "Enter the name of the student: ";
    cin >> n;

    s.setName(n);
    s.getName();
    
    return 0;
}