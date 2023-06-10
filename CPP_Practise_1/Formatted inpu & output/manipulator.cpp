/*
 	Manipulator :- It is used for formatted input output. 
	 To use this we have to add header file iomanip.h.
 	
 	manipulator         equivalent ios function
	setw()				width()
	setprecision() 		precision()
	setfill()			fill()
	setiosf()			setf()
	resetiosfags()		unsetf()
	endl				'\n'
	dec						
	oct
	hex
	setbase(16)
	ws :- used for whitespace.
	flush

*/
// example of manipulator.
using namespace std;
#include<iostream>
int main()
{ 
	int x, y, r;
	cout<<"Enter first  no : ";
	cin>>oct>>x;
	cout<<"Enter second no : ";
	cin>>oct>>y;
	r = x + y;
	cout<<"Sum : "<<oct<<r<<endl;
	return(0);	
}
