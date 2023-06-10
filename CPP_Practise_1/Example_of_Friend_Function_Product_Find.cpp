// Example of friend function friendly to a class...
using namespace std;
#include<iostream>
class Product{
	private:
		int x, y, z;
	public:
		void input(int a, int b, int c)
		{
			x = a;
			y = b;
			z = c;
		}
		void show()
		{
			cout<<"\nInputted numbers are :"<<endl;
			cout<<"First  number : "<<x<<endl;
			cout<<"Second number : "<<y<<endl;
			cout<<"Third  number : "<<z<<endl;
		}
		friend void getProduct(Product);
};
void getProduct(Product p){
	cout<<"Product of "<<p.x<<" * "<<p.y<<" * "<<p.z<<" : "<<p.x*p.y*p.z<<endl;
}
int main()
{
	Product p;
	int first, second, third;
	cout<<"Enter First Number  : ";
	cin>>first;
	cout<<"Enter Second Number : ";
	cin>>second;
	cout<<"Enter Third Number  : ";
	cin>>third;
	p.input(first,second,third);
	p.show();
	getProduct(p);
	return(0);
}
