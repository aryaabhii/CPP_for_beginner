// Odd & Even Find.
#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "Enter a number to check numbe is odd or even : ";
   cin >> num;
   // remainder checking if 0 then even or any remainder left then it is odd...
   if (num % 2 == 0)
   {
      cout << num << " is Even Number.";
   }
   else
   {
      cout << num << " is Odd Number.";
   }
   return 0;
}
