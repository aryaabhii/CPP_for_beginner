// Printing Trangular Pyramid.

#include <iostream>
using namespace std;
int main()
{
   int row;
   cout << "Enter row for pattern : ";
   cin >> row;
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < (row - i); j++)
      {
         cout << " ";
      }
      for (int j = 0; j < (2 * i - 1); j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   return 0;
}