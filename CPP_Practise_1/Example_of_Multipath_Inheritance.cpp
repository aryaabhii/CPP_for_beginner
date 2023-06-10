// Example of Multipath inheritance.....
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
			void showRoll()
			{
				cout<<"Roll is "<<roll<<endl;
			}
};
class marks:public Student{
	protected:
		int m1, m2, m3;
		public:
			void getMarks(int a, int b, int c)
			{
				m1 = a;
				m2 = b;
				m3 = c;
			}
			void showMarks()
			{
				cout<<m1<<endl<<m2<<endl<<m3<<endl;
			}
};
class sports:public Student{
	protected:
		int score;
		public:
			void getScore(int s)
			{
				score = s;
			}
			void showScore()
			{
				cout<<"Score is "<<score<<endl;
			}
};
class result:public marks, public sports{
	protected:
		int tot;
		public:
			void getTotal()
			{
				tot = m1 + m2 + m3 + score;
				cout<<"Result is "<<tot<<endl;
			}
};
int main()
{
	result r;
	r.getRoll(10);
	r.getMarks(25,26,56);
	r.getScore(50);
	r.showRoll();
	r.showMarks();
	r.showScore();
	r.getTotal();
	return(0);
}
