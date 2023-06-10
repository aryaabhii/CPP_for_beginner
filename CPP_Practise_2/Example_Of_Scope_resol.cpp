// Scope resolution.........
#include <iostream>
using namespace std;
int i = 5;
int main()
{
   int i = 10;
   cout << i << endl;
   cout << ::i;
   return 0;
}