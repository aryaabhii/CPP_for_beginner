// Count the number of digits for a given number n;
#include <iostream>
using namespace std;
int main()
{
   int num, digitCount = 0;
   cout << "Enter a number : ";
   cin >> num;
   while (num > 0)
   {
      digitCount++;
      num = num / 10; // it will divide and put out single number.
   }
   cout << digitCount;
   return 0;
}