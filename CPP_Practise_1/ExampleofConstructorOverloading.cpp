// Constructore overloading / multiple constructor within class..
// Example of multiple constructor within class...
// Example of constructor overloading...
using namespace std;
#include<iostream>
class demo{
	private:
		int num1, num2;
	public:
		demo(int a, int b) // two argument construct.
		{
			num1 = a;
			num2 = b;
		}
		void display()
		{
			cout<<"Num1 is "<<num1<<"\n Num2 is "<<num2<<endl;
		}
		demo(int a) // one  argument constructor..
		{
			num1 = a;
			num2 = a;
		}
		demo() // no argumnet constructor..
		{
			num1  = 10;
			num2  = 20; 
		}
};
int main()
{
	demo dd1(500);
	dd1.display();
	demo dd2;
	dd2.display();
	demo dd3(2000, 5000);
	dd3.display();
	return(0);
		
}
