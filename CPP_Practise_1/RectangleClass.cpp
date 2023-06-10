// Program to print the area, perimeter of a rectangle using class.
using namespace std;
#include<iostream>
class Rectangle{
	private:
		int length, breadth;
	public:
		void input(){
			cout<<"Enter the length of rectangle : ";
			cin>>length;
			cout<<"Enter the breadth of rectangle : ";
			cin>>breadth;
		}
		void display(){
			cout<<endl;
			cout<<"Entered length of rectangle : "<<length<<endl;
			cout<<"Entered breadth of rectangle : "<<breadth<<endl;
		}
		void getarea(){
			int area = length * breadth;
			cout<<endl;
			cout<<"Area of length "<<length<<" & "<<breadth<<" = "<<area<<endl;
		}
		void getperimeter(){
			int perimeter = 2 * (length + breadth);
			cout<<"Permeter of length "<<length<<" & "<<breadth<<" = "<<perimeter;
		}
};
int main(){
	Rectangle rec;
	rec.input();
	rec.display();
	rec.getarea();
	rec.getperimeter();
}
