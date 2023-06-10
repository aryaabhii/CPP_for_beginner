// Example of friend function.....
using namespace std;
#include<iostream>
class circle{
	private:
		int r;
	public:
		friend void input(int a, circle &);
		friend void show(circle);
		friend void getArea(circle);
		friend void getPerimeter(circle);
};
void input(int a, circle &c)
{
	c.r = a;
}
void show(circle c)
{
	cout<<"Radius is "<<c.r<<endl;
}
void getArea(circle c)
{
	cout<<"Area is "<<3.14*(c.r)*(c.r)<<endl;
}
void getPerimeter(circle c)
{
	cout<<"Perimeter is "<<2*3.14*(c.r)*(c.r)<<endl;
}
int main()
{
	circle  cc;
	int radius;
	cout<<"Enter the radius : ";
	cin>>radius;
	input(radius,cc);
	show(cc);
	getArea(cc);
	getPerimeter(cc);
	return(0);
}
