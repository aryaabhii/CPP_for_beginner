// Example of parameterized constructor...
using namespace std;
#include <iostream>
class demo
{
	private:
		int x, y;
	public:
		demo( int a, int b){
			x = a;
			y = b;
		}
		demo()
		{
			
		}
	    void display()
	    {
	        cout << "x is "<<x<<endl<<"y is "<<y<<endl;
	    }
};
int main()
{
    demo d=demo(425,250); // calling parameterized constRuctor.... [ Explicitily classname object = classname(arguments) ]
    d.display();
   	demo d1;
	d1.display(); 
    return (0);
}
