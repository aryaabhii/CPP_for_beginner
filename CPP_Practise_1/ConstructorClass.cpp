// example of copy constructor
using namespace std;
#include<iostream>
class demo{
	private:
		int x, y;
	public:
		demo(){}
		demo(int a, int b) // parameterized constructor
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout<<"x is "<<x<<endl<<"y is "<<y<<endl;
		}
		demo(demo &d) // copy constrctor
		{
			cout<<"Hi, There\n";
			x=d.x;
			y=d.y;
		}
};
int main()
{
	demo dd1(10, 20); // call parametrized constructor
	dd1.display(); // -> 10, 20
	demo dd2(dd1); // calls copy constructor
	dd2.display(); // -> 10, 20
	demo dd3=dd1; // calls copy constructor
	dd3.display(); // -> 10,20
	demo dd4;
	dd4 = dd1; // compy constructor not call/invoke, only assignment perform;
	dd4.display(); // -> 10,20
//	demo.dd5 = demo(dd1); // explicit calling
//	dd5.display();
	return(0);
}

