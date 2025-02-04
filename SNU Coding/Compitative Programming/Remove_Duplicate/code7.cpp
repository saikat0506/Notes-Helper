// Remove Duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

int removeduplicates(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    return (i + 1);
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter elements in the sorted array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << removeduplicates(arr) << endl;

    return 0;
}