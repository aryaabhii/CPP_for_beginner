// prg to print the sum of all even elements sored in an array.
using namespace std;
#include<iostream>
class even{
	private:
		int array[10], sum=0;
	public:
		void input(){
			cout<<"Enter 5 elements in array to check number is even : "<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>array[i];
			}
		}
		void displayEven(){
			cout<<"Even number from inputted elements are : "<<endl;
			for(int i=0; i<5; i++)
			{
				if(i % 2 == 0)
				{
					cout<<array[i]<<endl;
					sum += array[i];
				}
			}
			cout<<"Product of all even number : "<<sum;
		}	
};
int main(){
	even ev;
	ev.input();
	ev.displayEven();
	return 0;
}
