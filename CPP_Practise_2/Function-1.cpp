// Question based on Function.........
#include <iostream>
using namespace std;

// function for addition...
int add(int num1, int num2)
{
   int sum = num1 + num2;
   return sum;
}

// function for subtraction...
int difference(int num1, int num2)
{
   int diff = num1 - num2;
   return diff;
}

// function for multiplication...
int product(int num1, int num2)
{
   int pro = num1 * num2;
   return pro;
}

// function for remainder...
int remainder(int num1, int num2)
{
   int sum = num1 % num2;
   return sum;
}

// function for remainder...
int quotient(int num1, int num2)
{
   int sum = num1 / num2;
   return sum;
}

int main()
{
   // switch case for key............
   cout << "\n"
        << "Choose choice from below : " << endl
        << "\n";
   cout << "Press [ 1 ] for additon...." << endl;
   cout << "Press [ 2 ] for difference." << endl;
   cout << "Press [ 3 ] for multiply..." << endl;
   cout << "Press [ 4 ] for remainder.." << endl;
   cout << "Press [ 5 ] for quotient..." << endl
        << "\n";

   //  Inputting the value.
   int key, first, second;
   cout << "Enter your choice   : ";
   cin >> key;
   if (key == 1 || key == 2 || key == 3 || key == 4 || key == 5)
   {
      cout << "\n"
           << "Enter first number  : ";
      cin >> first;
      cout << "Enter second number : ";
      cin >> second;

      // switch case for.
      switch (key)
      {
      case 1:
         cout << "Sum        : " << add(first, second);
         break;
      case 2:
         cout << "Difference : " << difference(first, second);
         break;
      case 3:
         cout << "Product    : " << product(first, second);
         break;
      case 4:
         cout << "Remainder  : " << remainder(first, second);
         break;
      case 5:
         cout << "Quotient   : " << quotient(first, second);
         break;
      }
   }
   else
   {
      switch (key)
      {
      default:
         cout << "Sorry! You pressed wrong key...";
         break;
      }
   }
}