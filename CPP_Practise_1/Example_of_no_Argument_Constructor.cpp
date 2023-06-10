// Example of no argument constructor inheritanc...
using namespace std;
#include<iostream>
class Demo{
	public:
		Demo()
		{
			cout<<"Hi Demo...."<<endl;
		}
};
class exam:public Demo{
	public:
		exam():Demo() // explicit call of base class constructor...
		{
			cout<<"Bye Exam....";
		}
};
int main()
{
	exam e;
	return(0);
}
