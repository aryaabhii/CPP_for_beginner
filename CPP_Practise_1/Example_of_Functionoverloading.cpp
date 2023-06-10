// Example of function Overloading......
using namespace std;
#include<iostream>
class Demo{
	public:
		void show()
		{
			cout<<"Hello Base Class Demo Show....."<<endl;
		}
};
class exam:public Demo{
	public:
		void Show()
		{
			cout<<"Hi Derive Class Exam Show......."<<endl;
		}
};
int main()
{
	exam e;
	e.show();
	return(0);
}
