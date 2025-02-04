/*
Problem Statement:
Given an integer array nums, move all 0's to the end of it while maintaining the relative
order of the non-zero
Input: nums = [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]
Explanation: After moving all 0's to the end, the array becomes [1, 3, 12, 0, 0].elements
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> move_zero_to_end(vector<int> vec)
{
    int j = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != 0)
        {
            vec[j] = vec[i];
            j++;
        }
    }
    for (int i = j; i < vec.size(); i++)
    {
        vec[i] = 0;
    }
    return vec;
}

int main()
{
    vector<int> v;
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter numbers in the vector: ";
        cin >> num;
        v.push_back(num);
    }
    vector<int> ans = move_zero_to_end(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}