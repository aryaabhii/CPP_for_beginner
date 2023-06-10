//program to find the average marks of a student.
#include<iostream>
using namespace std;
int main()
{
	int hindi, eng, comp, sci ; // variable declaration
	cout<<"\t Student Average Marks Calculation :- "<< endl << endl;
	cout<<"Enter marks obtained in Hindi : "; // inputting hindi marks by users
	cin>>hindi;
	cout<<"Enter marks obtained in English : "; // inputting eng marks by users
	cin>>eng;
	cout<<"Enter marks obtained in Computer : "; // inputting comp marks by users
	cin>>comp;
	cout<<"Enter marks obtained in Science : "; // inputting sci marks by users
	cin>>sci;
	int average, sum; // declaration of new variable
	sum = hindi + eng + comp + sci; // adding the marks
	average = sum / 4; // average marks calculation
	cout<<"Total marks gained : " << sum << endl;  // printing total marks
	cout<<"Average marks obtained : " << average;  // printing avearge marks
	return 0;
}
