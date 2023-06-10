// Prg to overload binary operator '<' using friend function.........
using namespace std;
#include<iostream>
class LessThan{
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
		friend int operator<(LessThan, LessThan);
};
int operator<(LessThan lt1, LessThan lt2)
{
	if(lt1.num<lt2.num)
		return(1);  // True 
	else
		return(0);  // False
}
int main()
{
	LessThan lt1, lt2;
	int num;
	cout<<"This is for first  Object : "<<endl;
	cout<<"Enter a number : ";
	cin>>num;
	lt1.input(num);
	lt1.display();
	cout<<"This is for second Object : "<<endl; 
	cout<<"Enter a number : ";
	cin>>num;
	lt2.input(num);
	lt2.display();
	int r = lt1<lt2;
	cout<<"Result : "<<r;
	return(0);	
}
