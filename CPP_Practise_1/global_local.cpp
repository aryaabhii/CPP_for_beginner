using namespace std;
#include<iostream>
int x=500; //global var
int main()
{
	int x=100;
	count<<"local x is"<<x<<endl;
	count<<"global x is"<<::x<<endl;
	::x=x+225;
	count<<"local x is"<<x<<endl;
	count<<"global x is"<<::x<<endl;
	::x=x+440;
	count<<"local x is"<<x<<end;
	count<<"global x is"<<::x<<end;
	return 0;
}
