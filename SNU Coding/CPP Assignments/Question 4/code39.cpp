/*
Create a class Vehicle with attributes make (string) and model (string). Implement a parameterized constructor that initializes make and model based on user input. Write a program to create an object of the Vehicle class and display the vehicle information.
*/

#include <iostream>
using namespace std;

class vehicle
{
public:
    string make, model;
    vehicle(string make, string model)
    {
        cout << "The car making main company is " << make << endl;
        cout << "The model company is " << model << endl;
    }
};

int main()
{
    string make, model;
    cout << "The main car making company is ";
    cin >> make;
    cout << "The model of the main car making company is ";
    cin >> model;
    vehicle v(make, model);
    return 0;
}