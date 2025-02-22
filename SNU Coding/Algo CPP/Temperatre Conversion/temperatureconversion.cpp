#include <iostream>
using namespace std;
class temperature1
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

void temperature1 ::CentigradetoFahrenheit()
{
    fahrenheit = ((9.0 * centigrade) / 5.0) + 32.0;
    cout << "The fahrenheit temperature is " << fahrenheit << endl;
}

class temperature2
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

void temperature2 ::FahrenheittoCentigrade()
{
    centigrade = 5 * ((fahrenheit - 32) / 9);
    cout << "The centigrade temperature is " << centigrade << endl;
}

int main()
{
    temperature1 t1;
    t1.insert();
    t1.CentigradetoFahrenheit();
    temperature2 t2;
    t2.insert();
    t2.FahrenheittoCentigrade();
    return 0;
}