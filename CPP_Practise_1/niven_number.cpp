// program to print sum of all niven number stored in array.
using namespace std;
#include<iostream>
int main(){
	cout<<"Printing all niven number from 1 to 5 :"<<endl;
	int *a;
	a = new int[5];
	for(int i=0; i<5; i++)
	{
		cin>>*(a+i);
	}
	cout<<"Niven Numbers are: "<<endl;
	int p, rem, sum;
	for(int i=0; i<5; i++)
	{
		p=*(a+i);
		rem=0;
		sum=0;
		while(*(a+i)%10)
		{
			rem=*(a+i)%10;
			sum+=rem;
			*(a+i)=*(a+i)/10;
		}
		if(p%sum==0)
		{
			cout<<p;
		}
	}	
	return 0;
}
