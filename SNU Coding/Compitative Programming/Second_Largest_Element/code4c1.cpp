#include <bits/stdc++.h>
using namespace std;

void solution(int arr[], int n)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == INT_MIN)
    {
        cout << "There is no second largest element." << endl;
    }
    else
    {
        cout << "The second largest element is: " << second_largest << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    solution(arr, size);
    return 0;
}