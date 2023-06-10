// Example of single inheritance publicly inheritable.....
using namespace std;s
#include<iostream>
class num{ // base class....
	private:
		int x; // not inherited bcz of private.....
	public:
		int y;
	void input(){
		cout<<"Enter a number  :";
		cin>>x>>y;
	} 
	void display(){
		cout<<"X is "<<x<<endl<<"Y is "<<y<<endl;
	}
	int getx(){
		return(x);
	}
};
class sum:public num // derive class name..
{
	private:
		int r;
	public:
		void getSum() // here getsum function is created to get the value of x which is in private.....
		{
			r = y + getx();
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

