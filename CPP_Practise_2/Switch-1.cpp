// Switch example...
#include <iostream>
using namespace std;
int main()
{
   int key, first, second;
   cout << "Enter first number : ";
   cin >> first;
   cout << "Enter second number  : ";
   cin >> second;
   cout << "-----------------------------" << endl;
   cout << "Key 1 for Add : " << endl;
   cout << "Key 2 for Sub : " << endl;
   cout << "Key 3 for Mul : " << endl;
   cout << "Key 4 for Rem : " << endl;
   cout << "Key 5 for Quo : " << endl;
   cout << "-----------------------------" << endl;
   cout << "Enter key : ";
   cin >> key;
   cout << "-----------------------------" << endl;
   switch (key)
   {
   case 1:
      int sum;
      sum = first + second;
      cout << "Sum : " << sum;
      break;
   case 2:
      int diff;
      diff = first - second;
      cout << "Diff : " << diff;
      break;
   case 3:
      int mul;
      mul = first * second;
      cout << "Prod : " << mul;
      break;
   case 4:
      int rem;
      rem = first / second;
      cout << "Rem : " << rem;
      break;
   case 5:
      int quo;
      quo = first % second;
      cout << "Quo : " << rem;
      break;
   default:
      cout << "Invalid! Key...";
      break;
   }
   return 0;
}