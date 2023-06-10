// Example of No Argumnet Constructor only in Derive Class.....
using namespace std;
#include<iostream>
class Demo{
	public:
};
class exam:public Demo{
	public:
		exam()
		{
			cout<<"Bye Exam."<<endl;
		}	
};
int main()
{
	exam e;
	return(0);
}
