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
	    void display()
	    {
	        cout << "x is "<<x<<endl<<"y is "<<y<<endl;
	    }
};
int main()
{
    demo d(45,20); // calling parameterized constRuctor.... Implicitily [ classname obj(arguments) ]
    d.display();
    return (0);
}
