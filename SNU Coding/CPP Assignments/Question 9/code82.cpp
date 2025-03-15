/*
Create an abstract base class Vehicle with private attributes speed (double) and color (string). Implement public member functions to set and get these attributes. Create two derived classes, Car and Bike, from Vehicle, each with its constructor setting the speed and color attributes. Write a program to create objects of both Car and Bike classes, set their attributes, and display them using getter functions. [ Abstract Class with Private Members ]
*/

#include <iostream>
using namespace std;

class Vehicle
{
private:
    double speed;
    string color;

public:
    void set(double s, string c)
    {
        speed = s;
        color = c;
    }
    void get(double s, string c)
    {
        cout << "The speed of the vehicle is " << speed << "kmph" << endl;
        cout << "The color of the vehicle is " << color << endl;
    }
};

class Car : public Vehicle
{
public:
    Car(double s, string c)
    {
        set(s, c);
        get(s, c);
    }
};

class Bike : public Vehicle
{
public:
    Bike(double s, string c)
    {
        set(s, c);
        get(s, c);
    }
};

int main()
{
    double s;
    string c;
    cout << "Enter speed for car: ";
    cin >> s;
    cout << "Enter color for car: ";
    cin >> c;

    Car cr(s, c);
    cout << "Enter speed for bike: ";
    cin >> s;
    cout << "Enter color for bike: ";
    cin >> c;

    Bike b(s, c);
}