// Print the first multiple of 5 which is also a multiple of 7...
#include <iostream>
using namespace std;
int main()
{
   // uisng while loop..
   cout << endl
        << "While Loop Example....." << endl;
   int i = 5;
   while (true)
   {
      if (i % 7 == 0)
      {
         cout << i << endl;
         break;
      }
      i += 5;
   }

   // uisng for loop...
   cout << endl
        << "For Loop Example....." << endl;
   for (int j = 5;; i + 5)
   {
      if (i % 7 == 0)
      {
         cout << i << endl;
         break;
      }
   }
   return 0;
}