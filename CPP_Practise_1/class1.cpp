//prog to create a class sum to add two no.
using namespace std;
#include<iostream>
class sum
{
	private:
		int x,y;
	public:
		void input()
		{
			cout<<"enter two no.";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"x is"<<x<<endl;
			cout<<"y is"<<y<<endl;
		}
		void getsum()
		{
			int s;
			s=x+y;
			cout<<"sum is"<<s<<endl;
		}
};
int main()
{
	sum ss;
	ss.input();
	ss.display();
	ss.getsum();
	return(0);
}

