// Example of exception handling....
using namespace std;
#include<iostream>
int main()
{
	int first, second;
	cout<<"Enter first number : ";
	cin>>first;
	cout<<"Enter second number : ";
	cin>>second;
	int d = first - second;
	try{
		if(d!=0)
			cout<<first/d<<endl;
		else
			throw(d);  // throw point
	}
	catch(int a){
		cout<<"Exception is caught..."<<endl;
	}
	return(0);
}
