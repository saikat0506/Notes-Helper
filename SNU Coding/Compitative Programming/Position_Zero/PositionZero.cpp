/*
You are given one 2D array and you have to traverse this array. If you find out 0 at any position then make 0 of all numbers present at that row and column.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> make_zero(vector<vector<int>> v, int r_num, int c_num)
{
    int k1, k2;
    for (int i = 0; i < r_num; i++)
    {
        for (int j = 0; j < c_num; j++)
        {
            if (v[i][j] == 0)
            {
                k1 = i;
                k2 = j;
            }
        }
    }
    for (int i = 0; i < c_num; i++)
    {
        v[k1][i] = 0;
    }
    for (int j = 0; j < r_num; j++)
    {
        v[j][k2] = 0;
    }
    return v;
}

int main()
{
    vector<vector<int>> vec;
    int row_num, col_num;
    cout << "Enter the row number: ";
    cin >> row_num;
    cout << "Enter the column number: ";
    cin >> col_num;
    for (int i = 0; i < row_num; i++)
    {
        vector<int> v1;
        for (int j = 0; j < col_num; j++)
        {
            int n;
            cout << "Enter values in the 2D vector: ";
            cin >> n;
            v1.push_back(n);
        }
        vec.push_back(v1);
    }
    vector<vector<int>> ans = make_zero(vec, row_num, col_num);
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}