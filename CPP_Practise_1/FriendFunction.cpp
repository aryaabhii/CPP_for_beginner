// Example of friend function......
using namespace std;
#include<iostream>
class demo
{	
	private:
		int x, y;
	public:			
		friend void input(int a, int b, demo &);
		friend void show(demo);
};
void input(int a, int b, demo &dd)
{
	dd.x = a;
	dd.y = b;	
}
void show(demo dd)
{
	cout<<"X is "<<dd.x<<endl<<"Y is "<<dd.y<<endl;
}
int main()
{
	demo d;
	input(30, 40, d);
	show(d);
	return(0);
}
