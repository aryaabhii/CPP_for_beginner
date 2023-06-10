// Program to print the detail of an employee like, name, id, address & salary using class.
using namespace std;
#include<iostream>
#include<stdio.h>
class Employee{
	private:
		string name, address;
		int id;
		float salary;
	public:
		void input(){
			
				cout<<"Enter id of employee     : ";
		 		cin>>id;
				fflush(stdin);
				cout<<"Enter name of employee   : ";
				cin<<(name);
				cout<<"Enter salary of employee : ";
				cin>>salary;
				fflush(stdin);
				cout<<"Enter address of employee : ";
				gets(address);
		}
		void diplay(){
			cout<<id<<"\t"<<name<<"\t\t"<<salary<<"\t"<<"address"<<endl;
		}		
};
int main(){
	Employee emp1;
	emp1.input();
	cout<<endl;
	cout<<"Employee Details."<<endl;
	cout<<"Id"<<"\t"<<"Name"<<"\t\t"<<"Salary"<<"\t\t"<<"Address"<<endl;
	emp1.diplay();
	return 0;
}
