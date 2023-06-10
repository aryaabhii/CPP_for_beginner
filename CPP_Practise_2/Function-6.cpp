// Givetwo numbers a & b, write a programto print all the prime numbers present between a & b;
#include <iostream>
using namespace std;
bool primeNumber(int num)
{
   for (int i = 2; i < num; i++)
   {
      if (num % i == 0)
         return false;
   }
   return true;
}
int main()
{
   int start, end;
   cout << "Enter start : ";
   cin >> start;
   cout << "Enter end   : ";
   cin >> end;
   for (int i = start; i <= end; i++)
   {
      if (primeNumber(i))
         cout << i << " ";
   }
}
