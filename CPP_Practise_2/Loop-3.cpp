// Reverse the digits of a number..
#include <iostream>
using namespace std;
int main()
{
   int num, reverse = 0;
   cout << "Enter a number : ";
   cin >> num;
   while (num > 0)
   {
      int lastDigit = num % 10;
      reverse = reverse * 10 + lastDigit;
      num = num / 10;
   }
   cout << "Reversed : " << reverse;
   return 0;
}