// Example of no argument constructor in multiple inheritance...
using namespace std;
#include<iostream>
class Demo{ // base class
	public:
		Demo()
		{
			cout<<"Hi Hello Demo .."<<endl;
		}
};
class exam { // base class
	public:
		exam()
		{
			cout<<"Bye Exam .."<<endl;
		}
};
class example:public exam, public Demo{ // derive class....
	public:
		example()
		{
			cout<<"See you.."<<endl;
		}
};
int main()
{
	example e;
	return(0);
}
