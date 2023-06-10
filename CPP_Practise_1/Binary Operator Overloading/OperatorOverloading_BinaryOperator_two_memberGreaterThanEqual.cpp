// Prg to overload binary operator '>=' using member function.........
using namespace std;
#include<iostream>
class GreaterThanEqual{
	private:
		int num;
	public:
		void input(int a)
		{
			num = a;
		}
		void display()
		{
			cout<<num<<endl;
		}
		int operator>=(GreaterThanEqual);
};
int GreaterThanEqual :: operator>=(GreaterThanEqual gte)
{
	if(num>=gte.num)
		return(1);  // True 
	else
		return(0);  // False
}
int main()
{
	GreaterThanEqual gte1, gte2;
	int num;
	cout<<"This is for first  Object : "<<endl;
	cout<<"Enter a number : ";
	cin>>num;
	gte1.input(num);
	gte1.display();
	cout<<"This is for second Object : "<<endl; 
	cout<<"Enter a number : ";
	cin>>num;
	gte2.input(num);
	gte2.display();
	int r = gte1>=gte2;
	cout<<"Result : "<<r;
	return(0);	
}
