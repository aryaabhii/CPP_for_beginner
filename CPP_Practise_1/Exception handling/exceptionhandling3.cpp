// example of multiple catch for single try...
using namespace std;
#include<iostream>
int main()
{
	int x;
	try{
		cout<<"Enter a number : ";
		cin>>x;
		if(x>0)
			throw(10.5);
		else if(x<0)
			throw('A');
		else
			throw(x); // throw point 
	}
	catch(int a)
	{
		cout<<"Integer exception is caught..."<<endl;
	}
	catch(double m)
	{
	}
	catch(char n)
	{
		cout<<"Character exception caught.."<<endl;
	}
	return(0);
}
