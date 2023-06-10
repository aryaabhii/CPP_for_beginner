// program to print the sum of all elements stored in 2-D Array.
using namespace std;
#include<iostream>
class exam{
	private:
		int array[10][10], row, column, sum=0;
	public:
		void inputElement(){
			cout<<"Enter the row within 10 row : ";
			cin>>row;
			cout<<"Enter the column within 10 column : ";
			cin>>row;
			cout<<"Enter elements in 2-D Array : "<<endl;
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<column; j++)
				{
					cin>>array[i][j];
				}
			}
		}
		void displayElement(){
			cout<<"Inputted elements are : "<<endl;
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<column; j++)
				{
					cout<<array[i][j];
				}
			}
		}
};
int main(){
	exam e;
	e.inputElement();
	e.displayElement();
}
