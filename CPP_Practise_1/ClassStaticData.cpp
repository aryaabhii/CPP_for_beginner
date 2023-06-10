//example of static data member
//
using namespace std;
#include<iostream>
class example{
	private:
		int x;
		static int cnt;
	public:
		void input(int a){
			x=a;
			++cnt;
		}
		void display(){
			cout<<"X is : "<<x<<endl;
		}
		void displaycnt(){
			cout<<"Count is : "<<cnt<<endl;
		}
};
int example::cnt;
int main(){
	example e1, e2;
	e1.displaycnt(); // -> count is 0
	e2.displaycnt(); // -> count is 0
	e1.input(50);
	e1.displaycnt(); // -> count is 1
	
	e2.displaycnt(); // -> count is 1
	e1.input(100);
	e1.displaycnt(); // -> count is 2
	e2.displaycnt(); // -> count is 2
	
	example e3;
	e3.displaycnt(); // -> count is 2
	e3.input(75);
	e1.displaycnt(); // -> count is 3
	e2.displaycnt(); // -> count is 3
	e3.displaycnt(); // -> count is 3	
	e1.display();    // -> x is 50
	e2.display();    // -> x is 100
	e3.display();    // -> x is 75
	return(0);
}
