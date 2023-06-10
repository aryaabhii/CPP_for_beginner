// Prg to overload binary operator '>' using member function.........
using namespace std;
#include<iostream>
class GreaterThan{
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
		int operator>(GreaterThan);
};
int GreaterThan :: operator>(GreaterThan gt)
{
	if(num>gt.num)
		return(1);  // True 
	else
		return(0);  // False
}
int main()
{
	GreaterThan gt1, gt2;
	int num;
	cout<<"This is for first  Object : "<<endl;
	cout<<"Enter a number : ";
	cin>>num;
	gt1.input(num);
	gt1.display();
	cout<<"This is for second Object : "<<endl; 
	cout<<"Enter a number : ";
	cin>>num;
	gt2.input(num);
	gt2.display();
	int r = gt1>gt2;
	cout<<"Result : "<<r;
	return(0);	
}
