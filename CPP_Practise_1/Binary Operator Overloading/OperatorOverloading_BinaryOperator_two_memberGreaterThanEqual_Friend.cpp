// Prg to overload binary operator '>=' using friend function.........
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
		friend operator>=(GreaterThanEqual, GreaterThanEqual);
};
int operator>=(GreaterThanEqual gte1, GreaterThanEqual gte2)
{
	if(gte1.num>=gte2.num)
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
