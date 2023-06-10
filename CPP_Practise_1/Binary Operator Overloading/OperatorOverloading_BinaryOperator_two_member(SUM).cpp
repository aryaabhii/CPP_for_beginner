// Prg to overload binary operator to add two numbers using two member function.........
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
		// void operator+(Sum s); 
		void operator+(Sum &);
};
void Sum :: operator+(Sum &s)
{
	num = num+s.num;
}
int main()
{
	Sum s, ss;
	s.input(100);
	cout<<"This is for first  Object : "<<endl;
	s.display();
	cout<<"This is for second Object : "<<endl; 
	ss.input(150);
	ss.display();
	s+ss;
	cout<<"Sum : ";
	s.display();
	return(0);
}
