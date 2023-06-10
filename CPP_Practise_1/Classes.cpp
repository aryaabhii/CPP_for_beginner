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
	Demo dd, dd2, dd3;
	int a, b, c;
	cout<<("Enter First Number = ");
	cin>>a;
	cout<<("Enter Second Number = ");
	cin>>b;
	cout<<("Enter Third Number = ");
	cin>>c;
	dd.input(a,b,c);
	dd.display();
	cout<<endl;
	dd2.input(a,b,c);
	dd2.display();
	cout<<endl;
	dd3.input(a,b,c);
	dd3.display();
	return 0;
}
