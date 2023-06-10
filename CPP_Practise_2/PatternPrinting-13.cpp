// Pattern Printing.....
// Try to print alphabet diamond shape....
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A
#include <iostream>
using namespace std;
int main()
{
   int n = 5;

   // loop to print upper triangle.
   for (int line = 1; line <= n; line++)
   {
      // below code will print the spaces.
      int num_of_spaces = n - line;
      for (int j = 1; j <= num_of_spaces; j++)
      {
         cout << " ";
      }
      // below code will print the character.
      int num_of_chars = 2 * line - 1;
      for (int j = 0; j < num_of_chars; j++)
      {
         cout << (char)('A' + j);
      }
      cout << endl;
   }

   // loops to print lower triangle.
   for (int line = n + 1; line <= 2 * n - 1; line++)
   {
      // below code will print the spaces....
      int num_of_spaces = line - n;
      for (int j = 1; j <= num_of_spaces; j++)
      {
         cout << " ";
      }
      // below code will print the character.
      int num_of_chars = 2 * (2 * n - line) - 1;
      for (int j = 0; j < num_of_chars; j++)
      {
         cout << (char)('A' + j);
      }
      cout << endl;
   }
   return 0;
}