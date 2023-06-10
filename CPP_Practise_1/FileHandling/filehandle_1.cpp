/*
	There are three class needed to handle file.
	1.) Built-in classes :  It is used in file handling.
		a.) ifstream (input file stream) :- used to read content from file.
		b.) ofstream (output file stream) :- used to write contents in file.
		c.) fstream (file stream) :- 
		
		Note :- In file handling, fstream.h header file is attached.
		
		input (means read from keyboard)
		output (means write on monitor)
		
		steps to read & write in file.
		
		To opening file.
		1.) Two trics to open 
			a.) using constructor.
			b.) uisng open() function.
		
		a.) File opening using constructor.
			1.) for reading 
			Ex:- ifstream sh("Corona.txt");
				 sh>>x;
				 here sh is the object of ifstream.   
				 
			2.) For writing 	
			Ex:- ofstream ss("Sanitiser.txt");
				 ss<<"Hello"<<endl;
				 here ss is the object of ofstream. 				 
*/

// Example of file handling to perform write and read 

using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	// below code is for writing data on file.
	ofstream ss("MGM_College");
	ss<<"BCA"<<endl;
	ss<<"Bsc.It"<<endl;
	ss<<"BBM"<<endl;
	ss<<"BBA"<<endl;
	ss<<"Enjoyed_very_well."<<endl;
	ss<<"bye_bye_MGM."<<endl;
	ss.close();
	
	// below code if showing file data.
	ifstream sp("MGM_College");
	char x[50];
	sp>>x;
	cout<<x<<endl;
	sp>>x;
	cout<<x<<endl;
	sp>>x;
	cout<<x<<endl;
	sp>>x;
	cout<<x<<endl;
	sp>>x;
	cout<<x<<endl;
	sp>>x;
	cout<<x<<endl;
	sp.close();
	return(0);
}
