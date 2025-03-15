/* Write a program that adds two numbers and displays the result. */

#include <iostream>
using namespace std;

void addition(int a, int b)
{
    cout << "The result of the sum is " << a + b << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    addition(a, b);
    return 0;
}