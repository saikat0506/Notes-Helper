/*
Create a class Temperature with a private attribute celsius (double). Implement public member functions setCelsius() and getCelsius() to encapsulate access to the celsius attribute. Ensure that the temperature value is not less than -273.15°C (absolute zero). Write a program to create an object of the Temperature class, set the temperature, and display it. [ Encapsulation with validation ]
*/

#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

public:
    void setCelsius(double cel)
    {
        celsius = cel;
        if (cel < -273.15)
        {
            cout << "It is absolute zero temperture" << endl;
        }
        else
        {
            getCelsius();
        }
    }
    
    void getCelsius()
    {
        cout << "The temperture in celsius is: " << celsius << endl;
    }
};

int main()
{
    double cel;
    cout << "Enter the temperature in celsius: ";
    cin >> cel;

    Temperature t;
    t.setCelsius(cel);

    return 0;
}