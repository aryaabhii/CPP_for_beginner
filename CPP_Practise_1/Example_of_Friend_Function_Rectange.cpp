// Example of friend function. Finding the area and perimeter of rectangle using friend function.........
using namespace std;
#include<iostream>
class Rectangle{
	private:
		int length, breadth;
	public:
		friend void input(int a, int b, Rectangle &);
		friend void show(Rectangle);
		friend void getArea(Rectangle);
		friend void getPerimeter(Rectangle);
};
void input(int a, int b, Rectangle &r){
	r.length  = a;
	r.breadth = b; 
}
void show(Rectangle r){
	cout<<"Length of rectangle  : "<<r.length<<endl;
	cout<<"Breadth of rectangle : "<<r.breadth<<endl;
}
void getArea(Rectangle r){
	cout<<"Area of rectangle : "<<r.length * r.breadth<<endl;
}
void getPerimeter(Rectangle r){
	cout<<"Perimeter of rectangle : "<<2 * (r.length + r.breadth)<<endl;
}
int main(){
	Rectangle r;
	int length, breadth;
	cout<<"Enter length of rectangle : ";
	cin>>length;
	cout<<"Enter breadth of rectangle : ";
	cin>>breadth;
	input(length, breadth, r);
	show(r);
	getArea(r);
	getPerimeter(r);
	return(0);
}

