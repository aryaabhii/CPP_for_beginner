// Example of ambiguity in multiple inheritance......
using namespace std;
#include<iostream>
class Demo{
	public:
		void Show()
		{
			cout<<"Hello Demo Show....."<<endl;
		}
};
class Exam{
	public:
		void Show()
		{
			cout<<"Hi....";
		}
};
class example:public Demo, public Exam{
	public:
};
int main()
{
	example e;
	// e.Show(); // error
	// e.Show(); // error
	e.Demo::Show();
	e.Demo::Show();
	return(0);
}

