// Prg to pass object as argument..
// Prg to add two complex number..
// Example of returning object..
using namespace std;
#include<iostream>
class Complex{
	private:
		int real, img;
	public:
		void inputData(int r, int i)
		{
			real =  r;
			img  =  i;
		}
		void displayData()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex add(Complex);
};
Complex Complex::add(Complex c)
{
	Complex temp;
	temp.real = real + c.real;
	temp.img  = img  + c.img;
	return(temp); 
}
int main()
{
	Complex c1, c2, c3;
	int real, img;
	cout<<"Enter real number for c1 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c1 obj : ";
	cin>>img;
	c1.inputData(real, img);
	cout<<"Enter real number for c2 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c2 obj : ";
	cin>>img;
	c2.inputData(real, img);
	c1.displayData();
	c2.displayData();
	c3 = c1.add(c2);
	cout<<"After Addition : "<<endl;
	c3.displayData();
	return(0);
}

