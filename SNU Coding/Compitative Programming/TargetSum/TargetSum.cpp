/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
       Output: [0,1]
Constraints:

2 <= nums.length <= 10^4
-109 <= nums[i] <= 10^9
-109 <= target <= 10^9
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> targetsum(vector<int> vec, int no, int target)
{
    vector<int> ans;
    for (int i = 1; i < no; i++)
    {
        if (vec[i - 1] + vec[i] == target)
        {
            ans.push_back(i - 1);
            ans.push_back(i);
        }
    }
    return ans;
}

void display(vector<int> vec, int no)
{
    cout << endl;
    for (int i = 0; i < no; i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> v;
    int num, target;
    cout << "Enter how many elements do you want to enter? ";
    cin >> num;
    cout << "Enter the target value: ";
    cin >> target;
    for (int i = 0; i < num; i++)
    {
        int n;
        cout << "Enter a number you want to push: ";
        cin >> n;
        v.push_back(n);
    }
    display(v, num);
    vector<int> res = targetsum(v, num, target);
    display(res, 2);
    return 0;
}