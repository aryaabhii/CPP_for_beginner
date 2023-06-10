// Man verification...
#include <iostream>
using namespace std;
int main()
{
   cout << "Enter your age : ";
   int age;
   cin >> age;
   if (age <= 12)
   {
      cout << "Child.." << endl;
   }
   else if (age >= 12 && age <= 18)
   {
      cout << "Young." << endl;
   }
   else if (age >= 18 && age <= 40)
   {
      cout << "Sineor Citezon" << endl;
   }
   else
   {
      cout << "Old Man." << endl;
   }
   return 0;
}