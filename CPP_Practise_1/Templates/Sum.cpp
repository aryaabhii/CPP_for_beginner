// Example of generic function....
// Example of function template....
using namespace std;
#include<iostream>
template<class T>
void Sum(T n, T o){
	T sum;
	sum = n + o;
	cout<<"Sum is "<<sum<<endl; 
}
int main()
{
	int first_int, second_int;
	cout<<"Enter first integer value  : ";
	cin>>first_int;
	cout<<"Enter second integer value : ";
	cin>>second_int;
	Sum (first_int, second_int);
	// ---------------------------- //
	double first_double, second_double;
	cout<<"Enter first float value  : ";
	cin>>first_double;
	cout<<"Enter second float value : ";
	cin>>second_double;
	Sum (first_double, second_double);
	// ------------------------------ //
	char first_char, second_char;
	cout<<"Enter first character value  : ";
	cin>>first_char;
	cout<<"Enter second character value : ";
	cin>>second_char;
	Sum (first_char, second_char);
	return(0);
}

