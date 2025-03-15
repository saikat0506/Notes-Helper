/*
Create a base class Vehicle with attributes make and model. Create a derived class Car from Vehicle with an additional attribute year. Create another derived class SportsCar from Car with an additional attribute topSpeed. Write a program to create an object of the SportsCar class, set its attributes, and display them.[Multilevel Inheritance]
*/

#include <iostream>
using namespace std;

class vehicle
{
public:
    string make, model;
    void set_make_model(string, string);
};

void vehicle ::set_make_model(string ma, string mo)
{
    make = ma;
    model = mo;
}

class car : public vehicle
{
public:
    int year;
    void set_year(int y);
};

void car ::set_year(int y)
{
    year = y;
}

class sportscar : public car
{
public:
    int topspeed;
    void set_topspeed(int ts)
    {
        topspeed = ts;
    }
    void display()
    {
        cout << "The name of the main company of the car making is: " << make << endl;
        cout << "The name of the model of the car making is: " << model << endl;

        cout << "The year of the car making is: " << year << endl;
        cout << "The topspeed the car is: " << topspeed << " Kmph" << endl;
    }
};

int main()
{
    string ma, mo;
    int y, ts;

    cout << "Enter the main car making company: ";
    cin >> ma;
    cout << "Enter the model of the car: ";
    cin >> mo;
    cout << "Enter the year of the model car making: ";
    cin >> y;
    cout << "Enter the top-speed of model car: ";
    cin >> ts;

    sportscar car;
    car.set_make_model(ma, mo);
    car.set_year(y);
    car.set_topspeed(ts);
    car.display();
    
    return 0;
}