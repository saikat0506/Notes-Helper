/*
Q : sum of odd element in array 
sum of even element in array

i/p : [1,2,6,8,4,3,6,7,0]
o/p Even : 2 6 8 4 6 0 Sum = 26
odd : 1 3 7 sum = 11
*/

#include<bits/stdc++.h>
using namespace std;

void find_Odd_Even(int ar[], int sz) {
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < sz; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even_sum += ar[i];
        }
        else {
            odd_sum += ar[i];
        }
    }
    cout << "Even: " << even_sum << "\n" << "Odd: " << odd_sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers in the array: ";
        cin >> a[i];
    }
    find_Odd_Even(a, size);
    return 0;
}