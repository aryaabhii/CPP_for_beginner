// Example of file handling to perform write and read 
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	char name[30], address[40];
	int eid, salary;
	char ch;
	
	// Receiving input through keyboard to write into file.
	fstream e;	
	e.open("employe");
	
	e.open("employe",ios::out);
	do{
		cout<<"Enter employe name    : ";
		fflush(stdin);
		gets(name);
		fflush(stdin);
		cout<<"Enter employe id      : ";
		cin>>eid;
		cout<<"Enter employe address : ";
		fflush(stdin);
		gets(address);
		cout<<"Enter employe salary   : ";
		cin>>salary;
		
		// logic for write operations.
		e<<name<<"\t";
		e<<eid<<"\t";
		e<<address<<"\t";
		e<<salary<<endl;
		
		cout<<"Would you like to continoue [Y for Yes / N for No] : ";
		cin>>ch;	
	} while(ch=='Y' || ch=='y');
		e.close();
}


