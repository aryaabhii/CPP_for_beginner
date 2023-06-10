// Example of single inheritance privately inheritable.....
using namespace std;
#include<iostream>
class num{ // base class....
	protected:
		int x,y; 
	public:
	void input(){
		cout<<"Enter a number  :";
		cin>>x>>y;
	} 
	void display(){
		cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;
	}
};
class sum:protected num // derive class name..
{                                                                                                                                                                                                                                                                       
	private:
		int r;
	public:
		void getSum() // here getsum function is created to get the value of x which is in private.....
		{
			input();
			display();
			r = x + y;
			cout<<"Sum is " << r <<endl;
		}		
};
int main()
{
	sum ss;
//	ss.input();
//	ss.display();
	ss.getSum();
	return(0);
}

