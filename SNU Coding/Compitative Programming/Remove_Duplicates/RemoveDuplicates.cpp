#include <bits/stdc++.h>
using namespace std;

// Returns the size of the vector
int remove_duplicate(vector<int> vec)
{
    vector<int>::iterator it;
    it = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), it));
    return vec.size();
}

// Returns the unique vector itself
// vector<int> remove_duplicate(vector<int> vec) {
//     set<int> s;
//     for(auto x : vec) {
//         s.insert(x);
//     }
//     vector<int> vctr;
//     for (auto i : s)
//     {
//         vctr.push_back(i);
//     }
//     return vctr;
// }

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
    int res = remove_duplicate(v);
    cout << "The size of the vector is: " << res << endl;
    // vector<int> ans = remove_duplicate(v);
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }
}