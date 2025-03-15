/* Find out the Lowest Common Factor (LCF) of two input numbers using function. */

#include <iostream>
using namespace std;
void lcf(int a, int b)
{
    int gcf, lcf;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcf = i;
        }
    }
    cout << "Greatest Common Factor is " << gcf << endl;
    lcf = (a * b) / gcf;
    cout << "Least Common Factor is " << lcf << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    lcf(a, b);
    return 0;
}