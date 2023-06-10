// Plus pattern printing...
//   *
//   *
// *****
//   *
//   *
#include <iostream>
using namespace std;
int main()
{
   int n = 5;

   // this is loop to perform a task for each line...
   for (int line = 0; line < n; line++)
   {
      // main logic..
      for (int j = 0; j < n; j++)
      {
         // here the condition is that if the row is equal
         // to col then print star otherwise space.
         if (n / 2 == j)
            cout << "*";
         else if (n / 2 == line)
            cout << "*";
         else
            cout << " ";
      }
      cout << endl;
   }
}