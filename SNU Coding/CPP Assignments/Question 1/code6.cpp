/* Write a program to calculate Fahrenheit to Celsius. */

#include <iostream>
using namespace std;

void temperature(float f)
{
    float c;
    c = 5 * ((f - 32) / 9);
    cout << "The centigrade temperature is " << c << endl;
}

int main()
{
    float f;
    cout << "Enter a temperature in fahrenheit: ";
    cin >> f;
    temperature(f);
    return 0;
}