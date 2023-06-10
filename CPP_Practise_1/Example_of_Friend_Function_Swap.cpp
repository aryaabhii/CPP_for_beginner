// Example of friend function friendly to a class.....
using namespace std;
#include<iostream>
class Demo2; // forward or advance deceleration..
class Demo3; 
class Demo1{
	private:
		int first;
		friend void getSwap(Demo1 &, Demo2 &, Demo3 &);
	public:
		void input(int a){
			first = a;
		}
		void display(){
			cout<<"First number is "<<first<<endl;
		}
};
class Demo2{
	private:
		int second;
		friend void getSwap(Demo1 &, Demo2 &, Demo3 &);
	public:
		void input(int a){
			second = a;
		}
		void display(){
			cout<<"Second number is "<<second<<endl;
		}
};
class Demo3{
	private:
		int third;
		friend void getSwap(Demo1 &, Demo2 &, Demo3 &);
	public:
		void input(int a){
			third = a;
		}
		void display(){
			cout<<"Third number is "<<third<<endl;
		}
};
void getSwap(Demo1 &d, Demo2 &dd, Demo3 &ddd){
	int temp;
	temp = d.first;
	d.first = dd.second;
	dd.second = ddd.third;
	ddd.third = temp;
	cout<<"First value after swap  : "<<d.first<<endl;
	cout<<"Second value after swap : "<<dd.second<<endl;
	cout<<"Third value after swap  : "<<ddd.third<<endl;
}
int main(){
	Demo1 d; // class 1
	int first,second, third;
	cout<<"Enter number for Demo1 Class : ";
	cin>>first;
	d.input(first);
	d.display();
	Demo2 dd; // class 2
	cout<<"Enter number for Demo2 Class : ";
	cin>>second;
	dd.input(second);
	dd.display();
	Demo3 ddd; // class 3
	cout<<"Enter number for Demo3 Class : ";
	cin>>third;
	ddd.input(third);
	ddd.display();
	getSwap(d, dd, ddd);
	return(0);
}
