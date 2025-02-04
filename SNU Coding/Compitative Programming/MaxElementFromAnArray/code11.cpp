// Find the largest element from an unsorted array without using any inbuild method

#include <bits/stdc++.h>
using namespace std;

int maxnum(vector<int> arr, int sz) {
    int maxval = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (maxval < arr[i])
        {
            maxval = arr[i];
        }
    }
    return maxval;
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
    int val = maxnum(arr, size);
    cout << "Maximum number is: " << val << endl;
}