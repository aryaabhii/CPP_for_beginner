// Passing object as argument..
// passing object as Value..
// Program to add two complex number..
using namespace std;
#include<iostream>
class Complex{
	private:
		int real, img;
	public:
		void getData(int, int);
		void displayData();
		void add(Complex, Complex);
};
void Complex::getData(int r, int i)
{
	real = r;
	img  = i;
}
void Complex::displayData()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
void Complex::add(Complex cc1, Complex cc2)
{
	real = cc1.real + cc2.real;
	img  = cc1.img  + cc2.img;  
}
int main()
{
	Complex c1, c2, c3;
	int real, img;
	cout<<"Enter real number for c1 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c1 obj : ";
	cin>>img;
	c1.getData(real, img);
	cout<<"Enter real number for c2 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c2 obj : ";
	cin>>img;
	c2.getData(real, img);
	c1.displayData();
	c2.displayData();
	c3.add(c1, c2);
	cout<<"After Addition : "<<endl;
	c3.displayData();
	return(0);
}
