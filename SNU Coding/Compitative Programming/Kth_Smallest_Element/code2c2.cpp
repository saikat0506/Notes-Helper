#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int left, int right)
{
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

int quickSelect(vector<int> &arr, int left, int right, int k)
{
    if (left == right)
    {
        return arr[left];
    }

    int pivotIndex = partition(arr, left, right);

    if (k == pivotIndex)
    {
        return arr[k];
    }
    else if (k < pivotIndex)
    {
        return quickSelect(arr, left, pivotIndex - 1, k);
    }
    else
    {
        return quickSelect(arr, pivotIndex + 1, right, k);
    }
}

int findKthSmallest(vector<int> &arr, int k)
{
    return quickSelect(arr, 0, arr.size() - 1, k - 1);
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if (k > 0 && k <= n)
    {
        cout << "The " << k << "th smallest element is " << findKthSmallest(arr, k) << endl;
    }
    else
    {
        cout << "Invalid value of k" << endl;
    }

    return 0;
}
