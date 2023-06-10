// example of manipulator.
using namespace std;
#include<iostream>
#include<iomanip.h>
int main()
{ 
	int x, y, r;
	cout<<"Enter first  no : ";
	cin>>setbase(0)>>x;
	cout<<"Enter second no : ";
	cin>>Setbase(0)>>y;
	r = x + y;
	cout<<"Sum : "<<r<<endl;
	return(0);	
}
