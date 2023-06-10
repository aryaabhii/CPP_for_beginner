// program to create a class complex.
using namespace std;
#include<iostream>
class complex{
	private:
		int real, img;
	public:
		void input(){
			cout<<"Enter Real Number : ";
			cin>>real;
			cout<<"Enter Imaginary Number : ";
			cin>>img;
		}
		void display(){
			cout<<real<<'+'<<img<<'i'<<endl;
		}
};
int main(){
	complex c1, c2;
	c1.input();
	c1.display();
	c2.input();
	c2.display();
}
