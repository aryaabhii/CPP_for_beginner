using namespace std;
#include<iostream>
int main(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i==3)
		break;
		for(j=1;j<=5;j++)
		{
			cout<<i<<"\t"<<j<<endl;
			if(j==3)
			break;
		}
	}
}
