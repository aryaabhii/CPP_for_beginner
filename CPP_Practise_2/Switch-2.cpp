// Switch Example - 2;
#include <iostream>
using namespace std;
int main()
{
   // This is a simple message which will seen on user screen after execution of program;
   cout << "Press 1 for Sunday." << endl;
   cout << "Press 2 for Monday." << endl;
   cout << "Press 3 for Tuesday." << endl;
   cout << "Press 4 for Wednesday." << endl;
   cout << "Press 5 for Thursday." << endl;
   cout << "Press 6 for Friday." << endl;
   cout << "Press 7 for Saturday." << endl;
   cout << "-----------------------------" << endl;
   int btn;
   cout << "Which Day you want to print? :";
   cin >> btn;
   cout << "-----------------------------" << endl;
   switch (btn)
   {
   case 1:
      /* code */
      cout << "Monday." << endl;
      break;
   case 2:
      /* code */
      cout << "Monday." << endl;
      break;
   case 3:
      /* code */
      cout << "Tuesday." << endl;
      break;
   case 4:
      /* code */
      cout << "Wednesday." << endl;
      break;
   case 5:
      /* code */
      cout << "Thursday." << endl;
      break;
   case 6:
      /* code */
      cout << "Friday." << endl;
      break;
   case 7:
      /* code */
      cout << "Saturday." << endl;
      break;
   default:
      cout << "Invalid!." << endl;
      break;
   }
}