// Adding two number using C++
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	c = a + b;
	d = a - b;
	e = a * b;
	int f;
	f = a / b;
	cout<<"Sum : " << c << endl;
	cout<<"Diff : "<< d << endl;
	cout<<"Product : "<< e << endl;
	cout<<"Quot : "<< f << endl;
	return(0);
}
