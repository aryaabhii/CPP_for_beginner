// Program to print the area , circumference  of a circle using class.
using namespace std;
#include<iostream>
class Circle{
	private:
		float radius, pie = 3.141592653;
	public:
		void input(){
			cout<<"Enter the radius of circle : ";
			cin>>radius;
		}
		void display(){
			cout<<endl;
			cout<<"Entered radius of circle : "<<radius<<endl;
		}
		void getarea(){
			float area = pie * ( radius * radius);
			cout<<endl;
			cout<<"Area of circle "<<radius<<" = "<<area<<endl;
		}
		void getcircumference(){
			float circumference = 2 * pie * radius;
			cout<<"Circumference of circle "<<radius<<" = "<<circumference<<endl;
		}
};
int main(){
	Circle cir;
	cir.input();
	cir.display();
	cir.getarea();
	cir.getcircumference();
}
