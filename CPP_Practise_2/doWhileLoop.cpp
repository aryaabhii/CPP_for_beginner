// Example of dowhile loop.

// Print the sum of the stream of N integers in the input using do while loop.
#include <iostream>
using namespace std;
int main()
{
   int i, num, sum = 0;
   cout << "Initilization  : ";
   cin >> i;
   do
   {
      cout << "Enter a number : ";
      cin >> num;
      sum += num;
      i--;
   } while (i > 0);
   cout << sum << endl;
   return 0;
}