#include<iostream>
using namespace std;

class student
{
	protected:
		int rollno;
	public:
		student()
		{
		}
		student(int r)
		{
			rollno=r;
		}
		void getrollno();
		void putrollno();
};
void student::getrollno()
{
	cout<<"\n Accept Roll no :";
	cin>>rollno;
}
void student::putrollno()
{
	cout<<"\n Roll no is :";
	cout<<rollno;
}
class test:public student
{
	private: int m1,m2;
	public:
		test(){
		}
		test(int rn, int mark1, int mark2): student(rn)
		{	
			m1=mark1;
			m2=mark2;
		}
		void accept();
		void display();
};
void test::accept()
{
	cout<<"\n Accept Roll no :";
	cin>>rollno;
	cout<<"\nAccept Marks ";
	cin>>m1>>m2;
}
void test::display()
{
	cout<<"\n Roll no is :";
	cout<<rollno;
	cout<<"\nMarks are : ";
	cout<<m1<<"  "<<m2;
}
int main()
{
	test t1(101,90,90);
	t1.getrollno();
	t1.accept();
	
	t1.putrollno();
	t1.display();
	
	return 0;
}
