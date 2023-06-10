// Give two numbe a & b, write a program using function to print all the odd number.
#include <iostream>
using namespace std;
bool odd(int num)
{
   if (num % 2 != 0)
      return true;
}
int main()
{
   int start, end;
   cout << "Enter from where you want to find odd number : ";
   cin >> start;
   cout << "Enter till you want to find odd number       : ";
   cin >> end;
   for (int i = start; i <= end; i++)
   {
      if (odd(i))
         cout << i << " ";
   }
}