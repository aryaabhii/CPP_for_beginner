// Write a program to store & dispalay the details of 10 employee..
//Program to explain the example of array of object..
using namespace std;
#include<iostream>
#include<stdio.h>
class Employee{
	private:
		char  emp_name[20];
		int   emp_id;
		char  address[30];
		float salary;
	public:
		void getData()
		{
			cout<<"Enter Employee name : ";
			fflush(stdin);
			gets(emp_name);
			cout<<"Enter Employee id   : ";
			cin>>emp_id;
			cout<<"Enter Address : ";
			fflush(stdin);
			gets(address);
			cout<<"Enter salary  : ";
			cin>>salary;
		}
		void displayData()
		{
			cout<<"Employee name is "<<emp_name<<endl;
			cout<<"Employee Id is "<<emp_id<<endl;
			cout<<"Employee address is "<<address<<endl;
			cout<<"Employee salary is "<<salary<<endl;
		}
}; 
int main()
{
	Employee e[10]; // array of object....
	int num;
	cout<<"How many employee deatils you want to enter : ";
	cin>>num;
	cout<<"\n";
	cout<<"Enter details of "<<num<<" employee : "<<endl;
	for(int i=0; i<num; i++)
	{
		e[i].getData();
	}
	cout<<"\n";
	cout<<"Details of "<<num<<" employee are : "<<endl;
	for(int i=0; i<num; i++)
	{
		e[i].displayData();
	}
	return(0);
}

