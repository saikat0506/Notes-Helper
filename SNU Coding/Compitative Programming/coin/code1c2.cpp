#include <bits/stdc++.h>
using namespace std;

int count(int coins[], int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }
    if (sum < 0)
    {
        return 0;
    }
    if (n <= 0)
    {
        return 0;
    }
    return count(coins, n, sum - coins[n - 1])
           + count(coins, n - 1, sum);
}

int main()
{
    int coins[] = { 1, 2, 5 };
    int n = 3;
    int sum = 10;
    cout << count(coins, n, sum);
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

void findCombinations(int total, vector<int> &coins, vector<int> &combination, int index)
{
    if (total == 0)
    {
        for (int i = 0; i < combination.size(); i++)
        {
            cout << combination[i] << " ";
        }
        cout << endl;
        return;
    }

    if (total < 0 || index >= coins.size())
    {
        return;
    }

    // Include the current coin
    combination.push_back(coins[index]);
    findCombinations(total - coins[index], coins, combination, index);

    // Exclude the current coin
    combination.pop_back();
    findCombinations(total, coins, combination, index + 1);
}

void printAllCombinations()
{
    int total = 10;
    vector<int> coins = {1, 2, 5};
    vector<int> combination;
    findCombinations(total, coins, combination, 0);
}

vector<vector<int>> memo;

void findCombinationsOptimized(int total, vector<int> &coins, vector<int> &combination, int index)
{
    if (total == 0)
    {
        memo.push_back(combination);
        return;
    }

    if (total < 0 || index >= coins.size())
    {
        return;
    }

    // Include the current coin
    combination.push_back(coins[index]);
    findCombinationsOptimized(total - coins[index], coins, combination, index);

    // Exclude the current coin
    combination.pop_back();
    findCombinationsOptimized(total, coins, combination, index + 1);
}

void printAllCombinationsOptimized()
{
    int total = 10;
    vector<int> coins = {1, 2, 5};
    vector<int> combination;
    findCombinationsOptimized(total, coins, combination, 0);

    for (const auto &comb : memo)
    {
        for (int coin : comb)
        {
            cout << coin << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "All possible combinations to make 10 rupees:\n";
    printAllCombinations();
    cout << "\nOptimized method with memoization:\n";
    printAllCombinationsOptimized();

    return 0;
}
*/