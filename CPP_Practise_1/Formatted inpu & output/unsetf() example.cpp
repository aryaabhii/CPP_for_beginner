// exmample of setf()
using namespace std;
#include<iostream>
int main()
{ 
	cout.width(20);
	cout.setf(ios::left,ios::adjustfield);
	cout.setf(ios::fixed,ios::floatfield);
	cout.fill('*');
	cout<<350.114<<endl;
	cout.unsetf(ios::left | ios::scientific);
	cout.width(20);
	cout.setf(ios::scientific,ios::floatfield);
	cout.fill('*');
	cout<<350.114<<endl;
	return(0);	
}
