// Example of file handling to perform write and read 
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	// code fo inputting data from keyboard.
	ofstream e("employe");
	char name[30], address[40];
	int eid, salary;
	cout<<"Enter employe name    : ";
	gets(name);
	cout<<"Enter employe id      : ";
	cin>>eid;
	cout<<"Enter employe address : ";
	fflush(stdin);
	gets(address);
	cout<<"Enter employe salary   : ";
	cin>>salary;
	e<<name<<endl;
	e<<eid<<endl;
	e<<address<<endl;
	e<<salary<<endl;
	e.close();
	
	// outputting data of inputted data from file. 
	ifstream ee("employe");
	char x[50];
	cout<<"\nData of file.."<<endl;
	while(ee){
		ee.getline(x,50);
		cout<<x<<endl; 
	}
}


