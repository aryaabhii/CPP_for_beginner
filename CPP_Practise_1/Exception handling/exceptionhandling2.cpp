// Example of exception handling...
using namespace std;
#include<iostream>
int main(){
	int a, b, c;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;	
	try{
		if(b==0)
			throw b;
		else{
			c = a / b;
			cout<<"Result : "<<c;
		}
	}catch(int x){
		cout<<"Can't divided by "<<x<<endl;
	}
}
