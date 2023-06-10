//prg to print the product of each element stored in an array.
using namespace std;
#include<iostream>
class Product{
	private:
		int array[10], product=1;
	public:
		void input(){
			cout<<"Enter 5 elements in array to check number is even : "<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>array[i];
			}
		}
		void displayProduct(){
			cout<<"Inputted elements are : "<<endl;
			for(int i=0; i<5; i++)
			{
					cout<<array[i]<<endl;
					product = product * array[i];
			}
			cout<<"Product of all inputted number in array : "<<product;
		}	
};
int main(){
	Product pro;
	pro.input();
	pro.displayProduct();
	return 0;
}
