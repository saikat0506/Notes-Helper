// Take an integer array and calculate the median of the array for the odd and even both

#include <bits/stdc++.h>
using namespace std;

int median(vector<int> arr, int n)
{
    if (n == 1)
    {
        return arr[n - 1];
    }
    else if (n > 1 and n % 2 != 0)
    {
        return arr[n / 2];
    }
    else
    {
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter elements in the array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int val = median(arr, size);
    cout << "Median is: " << val << endl;
}