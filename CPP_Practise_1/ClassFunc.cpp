using namespace std;
#include<iostream>
class Demo{
	private:
		int x, y, z;
	public:
		void input(int a, int b, int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"X is = " << x << endl;
			cout<<"Y is = " << y << endl;
			cout<<"Z is = " << z << endl;
		}
};
int main(){
	Demo dd;
	int a, b, c;
	cout<<("Enter First Number = ");
	cin>>a;
	cout<<("Enter Second Number = ");
	cin>>b;
	cout<<("Enter Third Number = ");
	cin>>c;
	dd.input(a,b,c);
	dd.display();
	return 0;
}
