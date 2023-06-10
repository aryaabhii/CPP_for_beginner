// Prg to overload binary operator '<=' using member function.........
using namespace std;
#include<iostream>
class LessThanEqual{
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
		int operator<=(LessThanEqual);
};
int LessThanEqual :: operator<=(LessThanEqual lte)
{
	if(num<=lte.num)
		return(1);  // True 
	else
		return(0);  // False
}
int main()
{
	LessThanEqual lte1, lte2;
	int num;
	cout<<"This is for first  Object : "<<endl;
	cout<<"Enter a number : ";
	cin>>num;
	lte1.input(num);
	lte1.display();
	cout<<"This is for second Object : "<<endl; 
	cout<<"Enter a number : ";
	cin>>num;
	lte2.input(num);
	lte2.display();
	int r = lte1<=lte2;
	cout<<"Result : "<<r;
	return(0);	
}
