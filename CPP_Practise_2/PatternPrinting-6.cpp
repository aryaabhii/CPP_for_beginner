// Numeric REctangle Printing.

#include <iostream>
using namespace std;
int main()
{
   int row;
   cout << "Enter row for pattern : ";
   cin >> row;
   for (int i = 1; i <= row; i++)
   {
      // for right
      for (int j = i; j <= row; j++)
      {
         cout << j;
      }
      // for left
      for (int j = 1; j <= (i - 1); j++)
      {
         cout << j;
      }
      cout << endl;
   }
   return 0;
}