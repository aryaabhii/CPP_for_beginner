// Reverse triangle pattern.
#include <iostream>
using namespace std;
int main()
{
   int row;
   cout << "Enter row for pattern : ";
   cin >> row;
   for (int i = 1; i <= row; i++)
   {
      for (int j = i; j <= row; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}