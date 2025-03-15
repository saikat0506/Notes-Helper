/* Create a program that determines if a given number is even or odd. */

#include <iostream>
using namespace std;

void even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " " << "is even number";
    }
    else
    {
        cout << n << " " << "is odd number";
    }
}

int main()
{
    int n;
    cout << "Enter any number:";
    cin >> n;
    even_odd(n);
    return 0;
}