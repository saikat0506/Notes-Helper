/*
Problem Statement:
Given an integer array nums and an integer k, return the kth largest element in the array.
Input: nums = [3, 2, 1, 5, 6, 4], k = 2
Output: 5
Explanation: The 2nd largest element in the array is 5.
sort(arr)=[1,2,3,4,5,6],n=6
arr[4]=5
*/

#include<bits/stdc++.h>
using namespace std;

// Using Priority-queue and it will take O(nlogk) time complexity --> Merginally better answer
// int Kth_Largest_Element(vector<int> vec, int k) {
//     priority_queue<int, vector<int>, greater<int>> pq;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         if (pq.size() < k)
//         {
//             pq.push(vec[i]);
//         }
//         else if (pq.top() < vec[i])
//         {
//             pq.pop();
//             pq.push(vec[i]);
//         }
//     }
//     return pq.top();
// }

// Using Brute force method and it will take O(nlogn) time complexity
int Kth_Largest_Element(vector<int> vec, int k) {
    sort(vec.begin(), vec.end(), greater<>());
    return vec[k - 1];
}

int main() {
    vector<int> v;
    int size, k;
    cout << "Enter the size of the vector: ";
    cin >> size;
    cout << "Enter the value of k: ";
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter numbers in the vector: ";
        cin >> num;
        v.push_back(num);
    }
    int nm = Kth_Largest_Element(v, 2);
    cout << nm;
    return 0;
}