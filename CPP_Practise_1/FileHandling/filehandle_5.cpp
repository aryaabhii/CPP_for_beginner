// Example of file handling to perform copy
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	char name[30], address[40];
	int eid, salary;
	char ch;
	// code to open file in read mode.
	fstream e;	
	e.open("employe", ios::in);
	
	// code to open file in write mode.
	fstream s;
	s.open("Student", ios::out);
	
	char x[50];
	while(!e.eof()){
		e.getline(x,50);
		s<<x<<endl;
	}
	cout<<"One file copied."<<endl;
	e.close();
	s.close();	
	return(0);
}


