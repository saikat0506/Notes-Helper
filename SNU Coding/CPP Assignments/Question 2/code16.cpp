/*

Write a program to print the below pattern.

                    1
                 1     1
              1     2     1
           1     3     3     1
        1     4     6     4     1
     1     5     10    10    5     1
  1     6     15    20    15    6    1

*/

#include <iostream>
using namespace std;

void pascal_triangle(int r)
{
   for (int i = 0; i < r; i++)
   {

      int val = 1;
      for (int j = 1; j < (r - i); j++)
      {
         cout << " ";
      }
      for (int k = 0; k <= i; k++)
      {
         cout << " " << val;
         val = val * (i - k) / (k + 1);
      }
      cout << endl;
   }
   cout << endl;
}

int main()
{
   int r;
   cout << "Enter row numbers:";
   cin >> r;
   pascal_triangle(r);
   return 0;
}