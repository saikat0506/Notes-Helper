/*
Create a base class Animal with a virtual function sound(). Create two derived classes, Dog and Cat, from Animal, each implementing the sound() function to make their specific sounds. Create another derived class Zoo from Animal, which also overrides the sound() function. Write a program to create objects of Dog, Cat, and Zoo classes, store them in an array of Animal pointers, and call the sound() function for each object [ Polymorphism with Virtual Base Class ].
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

class Zoo : public Animal
{
public:
    void sound()
    {
        cout << "Wild animals are consereved in zooes and they bark at there " << endl;
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
        cout << "Enter 1 for Dog, 2 for Cat, 3 for Zoo: ";
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
        else if (choice == 3)
        {
            animal = new Zoo();
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