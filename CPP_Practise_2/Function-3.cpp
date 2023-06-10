// Give the age of a person,write a function to check if the person is eligible for vote or not?
#include <iostream>
using namespace std;

bool vote(int age)
{
   if (age < 18)
   {
      return false;
   }
   else
   {
      return true;
   }
}

int main()
{
   int age;
   cout << "Enter your age : ";
   cin >> age;
   if (vote(age) == true)
   {
      cout << "Yes! Eligible for the vote..";
   }
   else
   {
      cout << "Not! Eligible for the vote..";
   }
}