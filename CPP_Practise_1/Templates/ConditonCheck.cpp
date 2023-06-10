// Example of genric funtion...
//  Example of templete function...
// Prg to find the greatest among two number....
using namespace std;
#include<iostream>
template<class T>
void Greater(T f, T s){
	if(f > s)
		cout<<f<<" is Greatest Number";
	else
		cout<<s<<" is Greatest Number";	
}
int main()
{
	int first, second;
	cout<<"Enter First Number  : ";
	cin>>first;
	cout<<"Enter Second Number : ";
	cin>>second;
	Greater(first, second);
	return(0);
}
