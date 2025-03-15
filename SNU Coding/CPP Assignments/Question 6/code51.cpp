/*
Create a base class Animal with attributes name and age. Create a derived class Dog from Animal with an additional attribute breed. Write a program to create an object of the Dog class, set its attributes, and display them. [ Single Inheritance ]
*/

#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    int age;

    animal(string n, int a)
    {
        name = n;
        age = a;
    }

    animal() {}
};

class dog : public animal
{
public:
    string breed;

    dog(string b)
    {
        breed = b;
    }
    void display()
    {
        cout << "The breed of the dog is: " << breed << endl;
    }
};

int main()
{
    string n, b;
    int a;
    cout << "Enter the name of the dog: ";
    cin >> n;
    cout << "Enter the breed of the dog: ";
    cin >> b;
    cout << "Enter the age of the dog: ";
    cin >> a;

    animal an(n, a);
    cout << "The name of the dog is: " << an.name << endl;
    cout << "The age of the dog is: " << an.age << endl;

    dog d(b);
    d.display();
    
    return 0;
}