// Hollow number rectangle pattern.

#include <iostream>
using namespace std;
int main()
{
   int row, col;
   cout << "Enter row for pattern : ";
   cin >> row;
   cout << "Enter col for pattern : ";
   cin >> col;
   for (int i = 1; i <= row; i++)
   {
      for (int j = 1; j <= col; j++)
      {
         if (i == 1 || j == 1 || i == row || j == col)
         {
            cout << j;
         }
         else
         {
            cout << " ";
         }
      }
      cout << endl;
   }
   return 0;
}