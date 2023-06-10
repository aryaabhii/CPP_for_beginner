// Example of friend function friendly to a class.....
using namespace std;
#include<iostream>
class Exam; // forward or advance deceleration..
class Demo{
	private:
		int x;
		friend void getProduct(Demo, Exam);
	public:
		void input(int a)
		{
			x = a;
		}
		void display()
		{
			cout<<"X is "<<x<<endl;
		}
};
class Exam{
	private:
		int y;
		friend void getProduct(Demo, Exam);
	public:
		void input(int a)		
		{
			y = a;
		}
	void show()
	{
		cout<<"Y is "<<y<<endl;
	}
};
void getProduct(Demo d, Exam e)
{
	cout<<"Product of "<<d.x<<" * "<<e.y<<" = "<<d.x*e.y<<endl;
}
int main()
{
	Demo dd;
	int d,e;
	cout<<"Enter number for Demo Class : ";
	cin>>d;
	cout<<"Enter number for Exam Class : ";
	cin>>e;
	dd.input(d);
	dd.display();
	Exam ee;
	ee.input(e);
	ee.show();
	getProduct(dd, ee);
	return(0);
}
