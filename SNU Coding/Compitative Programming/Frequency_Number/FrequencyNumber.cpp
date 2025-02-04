/*
Problem Statement:
Given an integer array nums, determine the frequency of each element in the array.
Input: nums = [1, 2, 8, 4, 2, 1, 4, 5, 8, 2]
Output: Frequency of elements:
Element 1: 2
Element 2: 3
Element 4: 2
Element 5: 1
Element 8: 2
*/

#include <bits/stdc++.h>
using namespace std;

// Brute-Force method and it takes O(n²) time complexity
// map<int, int> count_frequency(vector<int> vec)
// {
//     map<int, int> mp;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < vec.size(); j++)
//         {
//             if (vec[i] == vec[j])
//             {
//                 count++;
//             }
//         }
//         mp.insert({vec[i], count});
//     }
//     return mp;
// }

// Better approach and it takes O(n) time complexity
map<int, int> count_frequency(vector<int> vec) {
    map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        mp[vec[i]]++;
    }
    map<int, int> :: iterator iter;
    for(auto x : mp) {
        cout << "Element " << x.first << ": " << x.second << endl;
    }
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
    map<int, int> m = count_frequency(v);
    map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << "Element " << (*itr).first << ": " << (*itr).second << endl;
    }
    return 0;
}