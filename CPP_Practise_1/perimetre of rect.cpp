// program to find the perimetre of a rectange.
#include<iostream>
using namespace std;
int main(){
	float length, width, perimetre;
	cout<<"\t Finding perimetre of Rectange :- "<< endl;
	cout<<"Enter length of rectange : ";
	cin>>length;
	cout<<"Enter width of rectange : ";
	cin>>width;
	perimetre = 2 * (length + width);
	cout<<"Perimetre of rectange : "<< perimetre;
	return 0;
}
