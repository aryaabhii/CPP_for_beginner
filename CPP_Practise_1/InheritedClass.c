// Example of single inheritance publicly inheritable.....
using namespace std;
#include<iostream>
class num{ // base class....
	private:
		int x; // not inherited bcz of private.....
	public:
		int y;
	void input(){
		cout<<"Enter a number  :";
		cin>>y;
	} 
	void display(){
		cout<<"X is "<<x<<endl<<"Y is "<<y<<endl;
	}
};
class sum:public num // derive class name..
{
	private:
		int r;
	public:
		void getSum(){
			r = y + x;
			cout<<"Sum is " << r <<endl;
		}
};

