/*
Create an abstract base class Animal with a pure virtual function sound(). Create two derived classes, Dog and Cat, from Animal, each implementing the sound() function to make their specific sounds. Write a program to create objects of both Dog and Cat classes, call the sound() function for each, and display their sounds.[ Abstract Base Class ]
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "These are animals' sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat growls." << endl;
    }
};

int main()
{
    Animal *animal;
    Animal a;
    
    Cat c;
    animal = &c;
    animal->sound();

    Dog d;
    animal = &d;
    animal->sound();

    return 0;
}