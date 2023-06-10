// Example of parameterized constructor in inheritance ....
using namespace std;
#include<iostream>
class Demo{ // base class...
	private:
		int x, y;
	public:
		Demo(int a, int b) // parametrised
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout<<"X is "<<x<<endl<<"Y is "<<y<<endl;
		}
};
class example:public Demo{ // derive class...
	public:
		example(int m, int n):Demo(m,n)
		{
			cout<<"See you example..."<<endl;
		}
};
int main()
{
	example e(30,50);
	e.display();
	return(0);
}

