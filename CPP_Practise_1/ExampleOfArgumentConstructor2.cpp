// Example of no argument constructor...
using namespace std;
#include <iostream>
class demo
{
	private:
		int x, y;
	public:
		demo(){
			x = 2;
			y = 5;	
		}
	    void display()
	    {
	        cout << "x is "<<x<<endl<<"y is "<<y<<endl;
	    }
};
int main()
{
    demo d;
    d.display()
    return (0);
}

