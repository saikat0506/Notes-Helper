#include <iostream>
using namespace std;

int oppositedice(int n)
{
    int ans = 7 - n;
    cout << ans;
}

int main()
{
    int n;
    cout << "Enter the value of n between 1 - 6: ";
    cin >> n;
    oppositedice(n);
    return 0;
}