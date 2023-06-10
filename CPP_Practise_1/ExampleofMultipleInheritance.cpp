// Example of multiple inheritance....
using namespace std;
#include<iostream>
class num1{
	protected:
		int x;
	public:
		void input(int a){
			x = a;
		}
		void display(){
			cout<<"X is "<<x<<endl;
		}
};
class num2{ // base class...
	protected:
		int y;
	public:
		void getData(int a){
			y =  a;
		}
		void show(){
			cout<<"Y is "<<y<<endl;
		}
};
class sum:public num1, public num2 // derive class sum...
{
	private:
		int s;
	public:
		void getSum(){
			s = y + x;
			cout<<"Sum is "<<s<<endl;
		}
};
int main()
{
	sum ss;
	ss.input(250);
	ss.getData(150);
	ss.display();
	ss.show();
}
