// Example of multiple inheritance .....
using namespace std;
#include <iostream>
class num1
{
	protected:
		int x;
	public:
		void input(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<"x is "<<x<<endl;
		}
};
class num2 //base class
{
	protected:
		int y;
	public:
		void getData(int a)
		{
			y = a;
		}
		void show()
		{
			cout<<"y is "<<y<<endl;
		}
};
class Sum:public num1, public num2 // deriven class sum
{
	private:
		int s;
	public:
		void getSum()
		{
			s = y + x;
			cout<<"Sum is "<<s<<endl;
		}
};
int main()
{
	Sum ss;
	ss.input(50);
	ss.getData(100);
	ss.display();
	ss.show();
	ss.getSum();
	return(0);
}

