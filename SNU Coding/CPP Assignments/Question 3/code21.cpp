/* Create a class called Person with the following attributes:
name (string), age (int), and address (string). Write a program to create an object of the Person class, set its attributes, and display them. */

#include <iostream>
using namespace std;

class person
{
public:
    string name, address;
    int age;
    person(string n, int a, string ad)
    {
        name = n;
        age = a;
        address = ad;
    }
    void display();
};

void person ::display()
{
    cout << "The name of the person is " << name << endl;
    cout << "The age of the person is " << age << endl;
    cout << "The address of the person is " << address << endl;
}

int main()
{
    person p("Shuvom", 43, "Kolkata");
    p.display();
    return 0;
}