// Example of other generic function....
// Example of function template....
using namespace std;
#include<iostream>
template<class T>
T Sum(T f, T s){
	T result;
	result = f + s;
	return(result);
}
int main()
{
	
	int first_int, second_int;
	cout<<"Enter first integer value  : ";
	cin>>first_int;
	cout<<"Enter second integer value : ";
	cin>>second_int;
	int Int_result = Sum (first_int, second_int);
	cout<<"Sum : "<<Int_result<<endl;
	// ------------------------------------------ //
	double first_double, second_double;
	cout<<"Enter first double value  : ";
	cin>>first_double;
	cout<<"Enter second double value : ";
	cin>>second_double;
	double Double_result = Sum (first_double, second_double);
	cout<<"Sum : "<<Double_result<<endl;
	// ------------------------------------------ //
	char first_char, second_char;
	cout<<"Enter first char value  : ";
	cin>>first_char;
	cout<<"Enter second char value : ";
	cin>>second_char;
	char Char_result = Sum (first_char, second_char);
	cout<<"Sum : "<<Char_result<<endl;
	return(0);
}
