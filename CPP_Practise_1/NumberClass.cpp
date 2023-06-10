// Program to print the square & cube of a number using class.
using namespace std;
#include<iostream>
class Number{
	private:
		int num;
	public:
		void input(){
			cout<<"Enter a number to calculate cube & suqare : ";
			cin>>num;
		}
		void display(){
			cout<<endl;
			cout<<"Entered number is : "<<num<<endl;
		}
		void getsuare(){
			int sqaure = num * num;
			cout<<endl;
			cout<<"Sqaure of given number "<<num<<" = "<<sqaure<<endl;
		}
		void getcube(){
			int cube = num * num * num;
			cout<<"Cube of given number "<<num<<" = "<<cube<<endl;
		}
};
int main(){
	Number num;
	num.input();
	num.display();
	num.getsuare();
	num.getcube();
}
