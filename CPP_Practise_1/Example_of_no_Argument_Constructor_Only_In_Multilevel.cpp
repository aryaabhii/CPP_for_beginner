// Example of no argument constructor in multiple inheritance... 
using namespace std;
#include<iostream>
class Demo{
	public:
		Demo()
		{
			cout<<"Hi hello "<<endl;
		}
};
class exam:public Demo { // intermdiate baseclass....
	public:
		exam()
		{
			cout<<"Bye Exam"<<endl;
		}
};
class example:public exam { // Derive CLass...
	public:
		example()
		{
			cout<<"See your example"<<endl;
		}
};
int main()
{
	example e;
	return(0);
}
