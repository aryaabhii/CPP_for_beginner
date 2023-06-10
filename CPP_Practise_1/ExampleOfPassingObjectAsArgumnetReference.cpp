// passing object as Value.
// Prg to add two complex number..
using namespace std;
class Complex{
	private:
		int real, img;
	public:
		void getData(int, int);
		void displayData();
		void add(Complex);
};
void Complex::getData(int r, int i)
{
	real = r;
	img  = i;
}
void Complex::displayData()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
void Complex::add(Complex &c)
{
	c.real = real + c.real;
	c.img  = img  + c.img;
}
int main()
{
	Complex c1, c2;
	int real, img;
	cout<<"Enter real number for c1 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c1 obj : ";
	cin>>img;
	c1.getData(real, img);
	cout<<"Enter real number for c2 obj      : ";
	cin>>real;
	cout<<"Enter imaginary number for c2 obj : ";
	cin>>img;
	c2.getData(real, img);
	c1.displayData();
	c2.displayData();
	c1.add(c2);
	cout<<"After addition : "<<endl;
	c1.displayData();
	return(0);
}
