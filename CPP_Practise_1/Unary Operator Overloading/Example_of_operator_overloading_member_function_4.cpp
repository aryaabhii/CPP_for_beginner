// Example of unary operator++ overloading using member function......
using namespace std;
#include<iostream>
class Demo{
	private:
		int first, second;
	public:
		void input(int a, int b)
		{
			first  = a;
			second = b;
		}
		void display()
		{
			cout<<"First number is "<<first<<endl;
			cout<<"Second number is "<<second<<endl;
		}
		void operator++();
};
void Demo::operator++()
{
	first  = first+1;
	second = second+1;
}
int main()
{
	Demo d;
	int f,s;
	cout<<"Enter first number : ";
	cin>>f;
	cout<<"Enter second number : ";
	cin>>s;
	d.input(f,s);
	d.display();
	++d; // within machine treated as d.operator++() ;
	cout<<"\nValue after Member Function execute..."<<endl;
	d.display();
	return(0);
}
