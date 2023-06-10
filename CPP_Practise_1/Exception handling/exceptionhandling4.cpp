// Example of catching all exception in a single catch..
using namespace std;
#include<iostream>
int main()
{
	int x;
	try{
		cout<<"Enter a number : "<<endl;
		cin>>x;
		if(x>0)
			throw(10.5);
		else if(x < 0)
			throw('A');
		else
			throw(x);  // throw point.
	}
	catch(...)
	{
		cout<<"Exception is caught and chapter is end.."<<endl;
	}
	return(0);
}
