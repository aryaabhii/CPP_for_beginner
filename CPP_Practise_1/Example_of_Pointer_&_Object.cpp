// Example of pointer and object....
using namespace std;
#include<iostream>
class Demo {
	private:
		int num1, num2;
	public:
		void input(int a, int b){
			num1 = a;
			num2 = b;			
		}
		void display(){
			cout<<"First number  : "<<num1<<endl;
			cout<<"Second number : "<<num2<<endl;
		}
		void sum(){
			cout<<"Sum of "<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
		}
};
int main()
{
	Demo d, *p;
	p = &d; // assigning address of object in pointer...
	int f, s;
	cout<<"Enter first number  : ";
	cin>>f;
	cout<<"Enter second number : ";
	cin>>s;
	(*p).input(f,s);
	(*p).display();
	(*p).sum();
	return(0);
}
