// Terney Example.
#include <iostream>
using namespace std;
int main()
{
   int num1, num2;
   cout << "Enter no 1 : ";
   cin >> num1;
   cout << "Enter no 2 : ";
   cin >> num2;
   (num1 < num2) ? cout << num2 << " is greater than " << num1 : cout << num2 << " is greater than " << num1;
}