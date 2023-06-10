//  * Passing of object as argument / parameter..
// -> Passing object as call by value.
// -> Passing object as call bu reference.
/* Write a program to explain the example of passing object as argument..
   or, Write a program to add two complex number.. */
// passing object as Argument.
// passing object as Value.
// Prg to add two complex number..
using namespace std;
#include<iostream>
class Complex{
	private:
		int real, img;
	public:
		void getData(int, int);
		void displayData();
		void add(Complex);
};
void Complex::getData(int r, int i)
{
	real = r;
	img = i;
}
void Complex::displayData()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
void Complex::add(Complex c)
{
	real = real + c.real;
	img = img + c.img;
}
int main()
{
	Complex c1, c2;
	int real, img;
	cout<<"Enter real number for c1 obj      : ";
	cin>>real;
	cout<<"Enter imaginaru number for c1 obj : ";
	cin>>img;
	c1.getData(real, img);
	cout<<"Enter real number for c2 obj      : ";
	cin>>real;
	cout<<"Enter imaginaru number for c2 obj : ";
	cin>>img;
	c2.getData(real, img);
	c1.displayData();
	c2.displayData();
	c1.add(c2);
	cout<<"After addition : "<<endl;
	c1.displayData();
	return(0);
}
