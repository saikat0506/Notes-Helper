/*
Create a class Person with private data members name (string) and age (int). Implement public member functions to set and get these attributes. Write a program to create an object of the Person class, set its attributes, and display them using getter functions. [ Abstraction with Private Data Members ]
*/

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void set(string n, int a)
    {
        name = n;
        age = a;
    }

    void get()
    {
        cout << "The name of the person is " << name << endl;
        cout << "The age of the person is " << age << endl;
    }
};

int main()
{
    string n;
    int a;
    cout << "Enter the name of the person: ";
    cin >> n;
    cout << "Enter the age of the person: ";
    cin >> a;

    Person p;
    p.set(n, a);
    p.get();

    return 0;
}