/* Write a program to calculate the compound and simple interest. */

#include <iostream>
#include <cmath>
using namespace std;

void compound_interest(float p, float r, int n, int t)
{
    float a;
    a = p * (pow((1 + r / n), (n * t)));
    cout << "The final amount is " << a << endl;
    cout << "The compound interest is " << a - p << endl;
}

void simple_interest(float p, float x, int t)
{
    float si;
    si = (p * t * x) / 100;
    cout << "The simple interest is " << si << endl;
}

int main()
{
    float p, x, r;
    int n, t;
    cout << "Enter the initial principal balance: ";
    cin >> p;
    cout << "Enter the interest rate: ";
    cin >> x;
    r = x / 100;
    cin >> n;
    cin >> t;
    cout << "Enter the number of times interest applied per time period: ";
    cout << "Enter the number of time periods elapsed: ";
    compound_interest(p, r, n, t);
    simple_interest(p, x, t);
    return 0;
}