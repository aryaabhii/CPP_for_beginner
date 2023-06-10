// example of manipulator.
using namespace std;
#include<iostream>
#include<iomanip.h>
int main()
{ 
	int x, y, r;
	cout<<"Enter first  no : ";
	cin>>setbase(8)>>x;
	cout<<"Enter second no : ";
	cin>>Setbase(8)>>y;
	r = x + y;
	cout<<"Sum : "<<setbase(8)<<r<<endl;
	return(0);	
}
