// Program to print the sum of two number using class.
using namespace std;
#include<iostream>
class Sum{
	private:
		int num1, num2;
	public:
		void input(){
			cout<<"Enter first number : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
		}
		void display(){
			cout<<"First number inputted by you : "<<num1<<endl;
			cout<<"Second number inputted by you : "<<num2<<endl;
		}
		void getsum(){
			int sum;
			sum = num1 + num2;
			cout<<"Sum of "<<num1<<" + "<<num2<<" = "<<sum;
		}
};
int main(){
	Sum sm;
	sm.input();
	sm.display();
	sm.getsum();
}
