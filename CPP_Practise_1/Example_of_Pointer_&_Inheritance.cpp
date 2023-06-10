// Example of pointer and inheritance...
using namespace std;
#include<iostream>
class Demo{
	public:
		void display()
		{
			cout<<"Demo diplay()"<<endl;
		}
};
class MyInterface:public Demo{
	public:
		void show()
		{
			cout<<"MyInterface Show()"<<endl;
		}
};
int main()
{
	Demo d, *p;
	p = &d;
	p->display();
	MyInterface mi;
	p = &mi;
	p->display();
	// p->show(); // here it will give erroe bcz we can't acces the derived interfce.
	((MyInterface *)p)->show(); // here using typecastingmethod we can use the typecasting method..
	return(0);
}



