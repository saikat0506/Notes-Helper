/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2


Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107
*/

#include <bits/stdc++.h>
using namespace std;

int subarray_sum(vector<int> nums, int k)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum = sum + nums[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> v;
    int size, k;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter numbers: ";
        cin >> num;
        v.push_back(num);
    }
    cout << "Enter the target value of the vector: ";
    cin >> k;
    int subarr = subarray_sum(v, k);
    cout << subarr;

    return 0;
}