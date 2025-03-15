/*
Create a base class Animal with a virtual function sound(). Create two derived classes, Dog and Cat, from Animal, each implementing the sound() function to make their specific sounds. Write a program to create objects of both Dog and Cat classes, store them in an array of Animal pointers, and call the sound() function for each object. [ Runtime Polymorphism (Virtual Functions) ]
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animals' barking sounds are here" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat growls" << endl;
    }
};

int main()
{
    int n, i;
    cout << "Enter animal numbers:";
    cin >> n;
    Animal *anml[50];

    for (i = 1; i <= n; i++)
    {
        int choice;
        cout << "Enter 1 for Dog, 2 for Cat: ";
        cin >> choice;

        Animal *animal;
        if (choice == 1)
        {
            animal = new Dog();
        }
        else if (choice == 2)
        {
            animal = new Cat();
        }
        else
        {
            cout << "Invalid input" << endl;
            animal = new Animal();
        }
        
        anml[i] = animal;
    }

    cout << "Sounds of animals:" << endl;
    for (i = 1; i <= n; i++)
    {
        anml[i]->sound();
    }

    for (i = 1; i <= n; i++)
    {
        delete anml[i];
    }

    return 0;
}