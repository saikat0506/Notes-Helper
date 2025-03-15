/* Write a program to display prime numbers between two intervals. */

#include <iostream>
using namespace std;

int IsPrime(int high)
{
    for (int i = 2; i * i <= high; i++)
    {
        if (high % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int low, high;
    cout << "Enter first number of your range:";
    cin >> low;
    cin >> high;
    cout << "Enter last number of your range:";
    cout << "prime numbers between " << low << " and " << high << " are:" << endl;
    for (int i = low; i <= high; i++)
    {
        if (IsPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}