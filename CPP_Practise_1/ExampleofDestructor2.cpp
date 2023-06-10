// Example of Destructor...
using namespace std;
#include<iostream> 
int count = 0;
class demo{
	public:
		demo()
		{
			++count;
			cout<<"Object created : "<<count<<endl;
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
	cout<<"We are within main : "<<endl;
	demo d3;
	{
		cout<<"We are within block.."<<endl;
		demo d4;
	}
	cout<<"Return to main()..."<<endl;
	return(0);
}
