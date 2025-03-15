/* Create a class called TemperatureConverter with methods to convert between Celsius and Fahrenheit temperatures. Write a program to convert a temperature from Celsius to Fahrenheit using the TemperatureConverter Class. */

#include <iostream>
using namespace std;
class temperatureconverter1
{
private:
    float centigrade, fahrenheit;

public:
    void insert()
    {
        cout << "Enter temperature in centigrade:";
        cin >> centigrade;
    }
    void CentigradetoFahrenheit();
};

void temperatureconverter1 ::CentigradetoFahrenheit()
{
    fahrenheit = ((9.0 * centigrade) / 5.0) + 32.0;
    cout << "The fahrenheit temperature is " << fahrenheit << endl;
}

class temperatureconverter2
{
private:
    float centigrade, fahrenheit;

public:
    void insert()
    {
        cout << "Enter temperature in fahrenheit:";
        cin >> fahrenheit;
    }
    void FahrenheittoCentigrade();
};

void temperatureconverter2 ::FahrenheittoCentigrade()
{
    centigrade = 5 * ((fahrenheit - 32) / 9);
    cout << "The centigrade temperature is " << centigrade << endl;
}

int main()
{
    temperatureconverter1 t1;
    t1.insert();
    t1.CentigradetoFahrenheit();
    temperatureconverter2 t2;
    t2.insert();
    t2.FahrenheittoCentigrade();
    return 0;
}