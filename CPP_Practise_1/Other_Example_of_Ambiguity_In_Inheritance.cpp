// Example of ambiguity resolution with the help of name of instance......
using namespace std;
#include<iostream>
class Demo{
	public:
		void Show()
		{
			cout<<"Hello Class...."<<endl;
		}
};
class Exam{
	public:
		void Show()
		{
			cout<<"Hi...";
		}
};
class example:public Demo, public Exam{
	public:
		void Show()
		{
			Demo::Show();
			Exam::Show();
		}
};
int main()
{
	example e;
	e.Show();
	return(0);
}
