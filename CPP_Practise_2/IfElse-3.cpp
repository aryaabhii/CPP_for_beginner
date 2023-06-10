// Marks, percentage & grade calculation...
#include <iostream>
using namespace std;
int main()
{
   // variable declaration...
   int maths, sci, sst, computer, hindi, totalMarksOfEachSub;

   // inputting marks from users....
   cout << "Enter marks for maths    : ";
   cin >> maths;
   cout << "Enter marks for science  : ";
   cin >> sci;
   cout << "Enter marks for sst      : ";
   cin >> sst;
   cout << "Enter marks for computer : ";
   cin >> computer;
   cout << "Enter marks for hindi    : ";
   cin >> hindi;

   // Total Marks Calculation.....
   int totalMarks = maths + sci + sst + computer + hindi;
   cout << "Total marks obtained : " << totalMarks << endl;

   // Total percentage calculation....
   int percentage = ((totalMarks * 100) / 500);
   cout << "Total percentage obtained : " << percentage << "%" << endl;

   // Grading system.
   if (percentage >= 90)
   {
      cout << "Grade A";
   }
   else if (percentage >= 75 && percentage < 90)
   {
      cout << "Grade B";
   }
   else if (percentage >= 55 && percentage < 75)
   {
      cout << "Grade C";
   }
   else
   {
      cout << "FAIL";
   }
   return 0;
}