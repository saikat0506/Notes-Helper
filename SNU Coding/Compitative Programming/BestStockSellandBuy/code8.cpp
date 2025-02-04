// Best time to buy or sell stock
/*
Problem Statement:
You are given an array prices where prices[i] is the price of a given stock on the ith
day. You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock. Return the maximum profit you
can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7, 1, 5, 3, 6, 4]
Output: 5
*/

#include <bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &prices)
{
    // 1st way to solve
    // int current_max = 0;
    // int max_uptill_now = 0;
    // if (prices.size() == 1)
    // {
    //     return current_max;
    // }
    // for (int i = 1; i < prices.size(); i++)
    // {
    //     max_uptill_now = max(0, max_uptill_now += prices[i] - prices[i - 1]);
    //     current_max = max(max_uptill_now, current_max);
    // }
    // return current_max;

    // 2nd way to solve
    int j = 0;
    int max = INT_MIN, min = INT_MAX;
    if (prices.size() == 1)
    {
        return 0;
    }

    for (int i = 0; i < prices.size(); i++)
    {
        if (min > prices[i])
        {
            min = prices[i];
            j = i;
        }
    }

    if (j == prices.size() - 1)
    {
        return 0;
    }
    
    for (int i = j + 1; i < prices.size(); i++)
    {
        if (max < prices[i])
        {
            max = prices[i];
        }
    }
    return (max - min);
}

int main()
{
    int size;
    cout << "Enter the size of the price array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter elements in the array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << maxprofit(arr) << endl;
    return 0;
}