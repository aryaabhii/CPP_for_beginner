// Example of hybrid inheritance...
using namespace std;
#include<iostream>
class Student{
	protected:
		int roll;
	public:
		void getRoll(int r)
		{
			roll = r;
		}
		void displayRoll()
		{
			cout<<"Roll is "<<roll<<endl;
		}
};
class marks:public Student{
	protected:
		int m1, m2, m3, m4, m5;
	public:
		void getMarks()
		{
			cout<<"Enter marks of 5 Subjects : \n";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		void displayMarks()
		{
			cout<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
		}
};
class Sports{
	protected:
		int score;
	public:
		void getScore(){
			cout<<"Enter score of sports : \n";
			cin>>score;
		}
		void displayScore(){
			cout<<"Score is "<<score<<endl;
		}
};
class result:public marks, public Sports{
	private:
		int tot;
	public:
		void getTotal(){
			tot = m1 + m2 + m3 + m4 + m5;
			cout<<"Result is "<<tot<<endl;
		}
};
int main()
{
	result r;
	r.getRoll(100);
	r.getMarks();
	r.getScore();
	r.displayRoll();
	r.displayMarks();
	r.getTotal();
	return(0);
}
