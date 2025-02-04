#include <bits/stdc++.h>
using namespace std;

int count_frequency(vector<int> vec)
{
    int maxcount = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
        }
    }
    return maxcount;
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
    int m = count_frequency(v);
    cout << m;
    return 0;
}