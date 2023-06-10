// Prg to overload binary operator to add two numbers using member function.........
using namespace std;
#include<iostream>
class Sum{
	private:
		int num;
	public:
		void input(int a)
		{	
			num  = a;	
		}
		void display()
		{
			cout<<"Number   : "<<num<<endl;
		}
		void operator +(Sum s);
};
void Sum :: operator +(Sum s){
	cout<<"Sum of "<<num<<" + "<<s.num<<" = "<<s.num+num;
}
int main()
{
	Sum s, ss;
	s.input(100);
	s.display();
	ss.input(150);
	ss.display();
	s+ss;
	return(0);
}
