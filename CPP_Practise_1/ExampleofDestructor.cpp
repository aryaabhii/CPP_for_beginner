// Example  of Destructor..
using namespace std;
#include<iostream>
int count = 0;
class demo{
	public:
		demo()
		{
			++count;
			cout<<"Object Created : "<<count<<endl;
		}
		~demo()
		{
			cout<<"Object Destroyed : "<<count<<endl;
			--count;
		}
};
int main()
{
	demo d1, d2;
	return(0);
}
