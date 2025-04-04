#include <stdio.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

int PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void QuickSort(int arr[], int low, int high)
{
    int partitionindex, n;
    if (low < high)
    {
        partitionindex = partition(arr, low, high);
        PrintArray(arr, n);
        QuickSort(arr, low, partitionindex - 1);
        QuickSort(arr, partitionindex + 1, high);
    }
}
int main()
{
    int arr[50], n, i, low, high;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Step by step QuickSort in the array:\n");
    PrintArray(arr, n);
    QuickSort(arr, 0, n - 1);
    PrintArray(arr, n);
}