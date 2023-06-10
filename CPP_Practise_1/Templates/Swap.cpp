// Example of genric funtion...
//  Example of templete function...
// Prg to swap two number or character....
using namespace std;
#include<iostream>
template<class T>
void Swap(T f, T s){
	
	cout<<"\nValue of first before swap : "<<f<<endl; 
	cout<<"Value of second before swap  : "<<s<<endl;
	cout<<"\n";
	
	T temp;
	temp =  f;
	f = s;
	s = temp;	
	cout<<"After Swap Value of first  : "<<f<<endl; 
	cout<<"After Swap Value of second : "<<s<<endl;
	cout<<"\n";
	cout<<"---------------------------------------\n\n";
}
int main()
{
	int first_int, second_int;
	cout<<"Enter first integer value  : ";
	cin>>first_int;
	cout<<"Enter second integer value : ";
	cin>>second_int;
	Swap (first_int, second_int);
	// ---------------------------- //
	double first_double, second_double;
	cout<<"Enter first float value  : ";
	cin>>first_double;
	cout<<"Enter second float value : ";
	cin>>second_double;
	Swap (first_double, second_double);
	// ------------------------------ //
	char first_char, second_char;
	cout<<"Enter first character value  : ";
	cin>>first_char;
	cout<<"Enter second character value : ";
	cin>>second_char;
	Swap (first_char, second_char);
	return(0);
}

