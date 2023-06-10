// program to create a class complex.
using namespace std;
#include<iostream>
class complex{
	private:
		int real, img;
	public:
		void input(int, int);
		void display();
	
};
void input(){
	cout<<"Enter Real Number : ";
	cin>>real;
	cout<<"Enter Imaginary Number : ";
	cin>>img;
}

int main(){
	void complex::input(int real, int img){
		real = r;
		img = i;
	}
	void complex::display(){
		cout<<real<<'+'<<img<<'i'<<endl;
	}
	complex c1, c2;
	c1.input();
	c1.display();
	c2.input();
	c2.display();
}
