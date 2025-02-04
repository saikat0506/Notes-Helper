/*
Problem Statement:
Given n non-negative integers a1, a2, ..., an, where each represents a point at
coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i
is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a
container, such that the container contains the most water.
Input: [1, 8, 6, 2, 5, 4, 8, 3, 7]
Output: 49
*/

#include <bits/stdc++.h>
using namespace std;

// This is Brute-Force method and it takes O(n²) time
// int most_water_container(vector<int> v) {
//     int area, maxarea = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i; j < v.size(); j++)
//         {
//             area = (j - i) * min(v[i], v[j]);
//             if (area > maxarea)
//             {
//                 maxarea = area;
//             }
//         }
//     }
//     return maxarea;
// }

// This is Two-pointer approach and it takes O(n) time
int most_water_container(vector<int> v)
{
    int left = 0, right = v.size() - 1, maxarea = 0;
    while (left < right)
    {
        maxarea = max(maxarea, (right - left) * min(v[left], v[right]));
        if (v[left] < v[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxarea;
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
    int res = most_water_container(v);
    cout << res;
    return 0;
}