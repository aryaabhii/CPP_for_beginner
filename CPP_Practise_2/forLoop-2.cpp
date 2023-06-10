// For Loop Example 2.
// Printing Table..
#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "Which table you want?  ";
   cin >> num;
   for (int i = 1; i <= 10; i++)
   {
      cout << num << " * " << i << " = " << num * i << endl;
   }
   return 0;
}