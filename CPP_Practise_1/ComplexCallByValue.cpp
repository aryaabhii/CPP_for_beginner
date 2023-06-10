// passing object as argument.
// passing object as value.
// program to add two complex member.
using namespace std;
#include<iostream>
class complex{
	private:
		int real, img;
	public:
		void getdata(int, int);
		void display();
		void add(complex);
};
void complex::getdata(int r, int i)
{
	real = r;
	img = i;
}
void complex::display()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
void complex::add(complex c)
{
	real = real + c.real;
	img = img + c.img;
}
int main()
{
	complex c1, c2;
	c1.getdata(200, 500);
	c2.getdata(900, 300);
	c1.display();
	c2.display();
	c1.add(c2); // c2.add(c1);
	cout<<"After addition : ";
	c1.display();
	return 0;
	
}
