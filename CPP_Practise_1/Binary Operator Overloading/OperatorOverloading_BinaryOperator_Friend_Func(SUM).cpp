// Prg to overload binary operator to add two numbers using two friend function.........
using namespace std;
#include<iostream>
class Sum{
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
		friend void operator+(Sum &, Sum);
};
void operator +(Sum &s, Sum s1)
{
	s1.num = s.num + s1.num;
}
int main()
{
	Sum s, ss;
	s.input(100);
	cout<<"This is for first  Object : "<<endl;
	s.display();
	cout<<"This is for second Object : "<<endl; 
	ss.input(200);
	ss.display();
	cout<<"Sum : ";
	s.display();
	return(0);
}
