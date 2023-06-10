// Example of generic class...
using namespace std;
#include<iostream>
template <class T>
class Demo{
	private:
		T f, s;
	public:
		void input(T a, T b)
		{
			f = a;
			s = b;
		}
		void display()
		{
			cout<<"First value  is "<<f<<endl;
			cout<<"Second value is "<<s<<endl;
		}
};
int main()
{
	Demo <int> di;
	int first_int, second_int;
	cout<<"Enter first integer value  : ";
	cin>>first_int;
	cout<<"Enter second integer value : ";
	cin>>second_int;
	di.input(first_int,second_int);
	di.display();
	
	Demo <double> dd;
	double first_double, second_double;
	cout<<"Enter first double value  : ";
	cin>>first_double;
	cout<<"Enter second double value : ";
	cin>>second_double;
	dd.input(first_double, second_double);
	dd.display();
	
	Demo <char> dc;
	char first_char, second_char;
	cout<<"Enter first char value  : ";
	cin>>first_char;
	cout<<"Enter second char value : ";
	cin>>second_char;
	dc.input(first_char, second_char);
	dc.display();
}
