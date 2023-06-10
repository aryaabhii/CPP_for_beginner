// program to print product of all even number stored in array.
using namespace std;
#include<iostream>
int main(){
	cout<<"Printing all even number from 1 to 5 :"<<endl;
	int *x, product = 0;
	x = new int[5];
	for(int i=0; i<5; i++)
	{
		cin>>*(x+i);
	}
	cout<<"Even Numbers are: "<<endl;
	for(int i=0; i<5; i++)
	{
		if(*(x+i) % 2)
		{
			cout<<*(x+i)<<endl;	
		}
		product = product * (*(x+i));
	}	
	cout<<"Product of even number = " << product << endl;
	return 0;
}
