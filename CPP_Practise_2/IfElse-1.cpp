// Voting check using loop...
#include <iostream>
using namespace std;
int main()
{
   int age;
   cout << "Enter your age : ";
   cin >> age;
   if (age < 18)
   {
      cout << "You are not eligible for vote.";
   }
   else
   {
      cout << "You are eligible for vote.";
   }
   return 0;
}