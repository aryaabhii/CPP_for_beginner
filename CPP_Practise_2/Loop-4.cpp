// Find the sum of the following series.
// s = 1-2+3-4......n
#include <iostream>
using namespace std;
int main()
{
   int num, result = 0;
   cout << "Enter a number : ";
   cin >> num;
   for (int i = 1; i <= num; i++)
   {
      if (i % 2 == 0)
      {
         result = result - i;
         cout << result << " ";
      }
      else
      {
         result = result + i;
         cout << result << " ";
      }
   }
   cout << endl
        << "Result : " << result << endl;
   return 0;
}