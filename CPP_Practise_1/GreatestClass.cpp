// Program to print the greatest number using class.
using namespace std;
#include<iostream>
class Great{
	private:
		int num1, num2, num3;
	public:
		void input(){
			cout<<"Enter first number  : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
			cout<<"Enter third number  : ";
			cin>>num3;
		}
		void diplay(){
			cout<<endl;
			cout<<"Entered first number  : "<<num1<<endl;
			cout<<"Entered second number : "<<num2<<endl;
			cout<<"Entered third number  : "<<num3<<endl;
		}
		void getGreatest(){
			cout<<endl;
			if(num1>num2) // checking condtion between num1 & num2
				if(num1>num3){ // checking condtion between num1 & num3
					// here is num1 is greater than num2 then it will print num1 otherwise num3 in else section.
					cout<<"Greatest number from three inputted number = "<<num1;
				}else{
					cout<<"Greatest number from three inputted number = "<<num3;
				}
			else if(num2>num3){
				cout<<"Greatest number from three inputted number = "<<num2;
			}else{
				cout<<"Greatest number from three inputted number = "<<num3;
			}
		}
};
int main(){
	Great gr;
	gr.input();
	gr.diplay();
	gr.getGreatest();
}
