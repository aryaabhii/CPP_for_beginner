// Program to print the factorial of number using class.
using namespace std;
#include<iostream>
class Factorial{
	private:
		int num;
	public:
		void input(){
			cout<<"Enter a number to find the factorial : ";
			cin>>num;
		}
		void diplay(){
			cout<<endl;
			cout<<"Entered number : "<<num<<endl;
		}
		void getFactorial(){
			int factorial=1;
			for(int i=1; i<=num; i++)
			{
				factorial = factorial * i;
			}
			cout<<"Factorial : "<<factorial;
		}
};
int main(){
	Factorial fac;
	fac.input();
	fac.diplay();
	fac.getFactorial();
}
