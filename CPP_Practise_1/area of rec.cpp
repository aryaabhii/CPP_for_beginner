// program to find the area of a rectange.
#include<iostream>
using namespace std;
int main(){
	float length, width, area;
	cout<<"\t Finding area of Rectange :- "<< endl;
	cout<<"Enter length of a rectange : ";
	cin>>length;
	cout<<"Enter width of rectange : ";
	cin>>width;
	area = length * width;
	cout<<"Area of rectangle : "<< area;
	return 0;
}
