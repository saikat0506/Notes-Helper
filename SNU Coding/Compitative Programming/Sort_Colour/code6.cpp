// Sort Colors (Also in Leetcode)

#include <bits/stdc++.h>
using namespace std;

void sortcolors(vector<int> &colours)
{
    int low = 0;
    int mid = 0;
    int high = colours.size() - 1;
    while (mid <= high)
    {
        if (colours[mid] == 0)
        {
            swap(colours[low], colours[mid]);
            low++;
            mid++;
        }
        else if (colours[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(colours[mid], colours[high]);
            high--;
        }
    }

    // sort(colours.begin(), colours.end()); // ---> We also can use this but it takes O(nlogn) time
}

void printcolours(vector<int> &colours)
{
    for (int i = 0; i < colours.size(); i++)
    {
        cout << colours[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the colour array: ";
    cin >> size;
    vector<int> color(size);
    cout << "Enter elements in the sorted array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> color[i];
    }
    cout << "Your vector array: ";
    printcolours(color);
    sortcolors(color);
    cout << "Your sorted vector array: ";
    printcolours(color);

    return 0;
}