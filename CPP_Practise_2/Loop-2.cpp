// Find the sum of digits in a given number n.
#include <iostream>
using namespace std;
int main()
{
   int num, sum = 0;
   cout << "Enter a number : ";
   cin >> num;
   while (num > 0)
   {
      int lastDigit = num % 10;
      sum = sum + lastDigit;
      num = num / 10;
   }
   cout << sum;

   return 0;
}
