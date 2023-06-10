// program to print the sum of odd and even.
#include <iostream>
using namespace std;
int main()
{
   int start, end;
   cout << "Program to calculate the sum of all odd & even number between enterd number are : " << endl;
   cout << "Enter number from where you want to start : ";
   cin >> start;
   cout << "Enter number from where you want to end : ";
   cin >> end;
   // This code is for switch case.....
   int key, evenSum = 0, oddSum = 0;
   cout << "Which one you want to perform calculation.: " << endl;
   cout << "Press [ 1 ] for even !" << endl;
   cout << "Press [ 2 ] for odd !" << endl;
   cout << "Enter your choice : ";
   cin >> key;
   switch (key)
   {
   case 1:
      for (int i = start; i <= end; i++)
      {
         if (i % 2 == 0)
         {
            evenSum += i;
            i++;
         }
      }
      cout << "Total Sum of even from " << start << " to " << end << " are : " << evenSum;
      break;
   case 2:
      for (int i = start; i <= end; i++)
      {
         if (i % 2 != 0)
         {
            oddSum += i;
            i++;
         }
      }
      cout << "Total Sum of odd from " << start << " to " << end << " are : " << oddSum;
      break;
   default:
      cout << "Invalid! Please enter a valid key.";
      break;
   }
   return 0;
}