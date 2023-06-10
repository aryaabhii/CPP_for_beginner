// GIven 2 numbers a & b. Find a raise to the power b...
#include <iostream>
using namespace std;
int main()
{
   int exponents, power, result = 1;
   cout << "Enter exponent  : ";
   cin >> exponents;
   cout << "Enter power     : ";
   cin >> power;
   for (int i = 1; i <= power; i++)
   {
      result = result * exponents;
   }
   cout << exponents << "^" << power << " = " << result;
   return 0;
}