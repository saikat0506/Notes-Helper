/*
Create a base class Person with attributes name and age. Create two derived classes, Student and Teacher, from Person. Write a program to create objects of both Student and Teacher classes, set their attributes, and display them. [ Hierarchical Inheritance ]
*/

#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void get_name_age(string n, int a);
};

void person ::get_name_age(string n, int a)
{
    name = n;
    age = a;
}

class student : public person
{
public:
    string name;
    int age;
    void get_name_age(string n, int a);
};

void student ::get_name_age(string n, int a)
{
    name = n;
    age = a;
}

class teacher : public person
{
public:
    string name;
    int age;

    void get_name_age(string n, int a);
};

void teacher ::get_name_age(string n, int a)
{
    name = n;
    age = a;
}

int main()
{
    string n;

    int a;
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the age of the student: ";
    cin >> a;

    student s;
    s.get_name_age(n, a);
    cout << "The name of the student is: " << s.name << endl;
    cout << "The age of the student is: " << s.age << endl;

    teacher t;
    cout << "Enter the name of the teacher: ";
    cin >> n;
    cout << "Enter the age of the teacher: ";
    cin >> a;

    t.get_name_age(n, a);
    cout << "The name of the teacher is: " << t.name << endl;
    cout << "The age of the teacher is: " << t.age << endl;

    return 0;
}