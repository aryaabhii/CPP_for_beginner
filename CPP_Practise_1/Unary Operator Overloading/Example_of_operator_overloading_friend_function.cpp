// Example of unary operator- overloading using friend function......
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
			cout<<"Second number is " <<second<<endl;
		}
		friend void operator-(Demo &);
};
void operator-(Demo &d)
{
	d.first  = -d.first;
	d.second = -d.second;
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
	-d; // within machine treated as operator-(d);
	cout<<"\nValue after Friend Function execute..."<<endl;
	d.display();
	return(0);
}

