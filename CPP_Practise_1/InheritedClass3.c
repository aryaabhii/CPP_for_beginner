// Example of single inheritance protected inheritable.....
using namespace std;
#include<iostream>
class num{ // base class....
	private:
		int x,y; // not inherited bcz of private.....
	public:
	void input(){
		cout<<"Enter a number  :";
		cin>>x>>y;
	} 
	void display(){
		cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;
	}
	int getx(){
		return(x);
	}
	int gety(){
		return(y);
	}
};
class sum:public num // derive class name..
{
	private:
		int r;
	public:
		void getSum() // here getsum function is created to get the value of x which is in private.....
		{
			r = gety() + getx();
			cout<<"Sum is " << r <<endl;
		}		
};
int main()
{
	sum ss;
	ss.input();
	ss.display();
	ss.getSum();
	return(0);
}

