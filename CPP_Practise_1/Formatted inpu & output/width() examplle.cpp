/* 
	Formatted input & output :-
	we had use in c language ("%d10",25) to display after 8 space in right justified.
	
	We achieve it in c++ using function listed below:-
	1.) width() :- sets width to display output for one data only.
	2.) precision() :- To skip the digit after point in numeric data (7.2556).
	3.) fill() :- It will fill the blank space.
	4.) setf() :- It is use to justify contents.  f for flag.
		1.) ios::right, ios::adjustfield.
		2.) ios::left, ios::adjustfield.
		3.) ios::internal, ios::adjustfield.
		4.) ios::dec, ios::basefield.
		5.) ios::oct, ios::basefield.
		6.) ios::hex ios::basefield.
		7.) ios::fixed, ios::floatfield;
		8.) ios::scientific, ios::floatfield;
	
	5.) unsetf() :- It will reset our settings.	
*/
// exmample of width()
using namespace std;
#include<iostream>
int main()
{
	cout.width(20); // it will set the width..
	cout<<"hi! programmer.";
	cout.width(20);
	cout<<"How are you?";
	return(0);
}
