// program to find the checking whether eligible for voting or not.
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"\t Checking whether eligible for voting or not :- "<< endl;
	cout<<"Enter age : ";
	cin>>age;
	if (age>=18)
	{
		cout<<"Eligibale for voting.";
	}
	else
	{
		cout<<"Not ELigibale for voting.";
	}
}
