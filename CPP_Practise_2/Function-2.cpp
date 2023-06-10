// write a function to print the squaresof the first 5 natural numbers.
#include <iostream>
using namespace std;

// function for sqaure.
int squares(int num)
{
   int sq = num * num;
   return sq;
}

int main()
{
   // cout << "Enter 5 natural number : " << endl;
   for (int i = 1; i <= 5; i++)
   {
      cout << squares(i) << " ";
   }
}