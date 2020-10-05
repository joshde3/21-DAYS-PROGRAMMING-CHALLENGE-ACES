#include<iostream>
using namespace std;
class student
{
	protected:
		int x;
	public:
		void display();
};
void student::display()
{
	cout<<"\n This is base class function ";
}
class result:public student
{
	protected: int m1,m2;
	public:
		void display();
};

void result::display()
{
	cout<<"\n This is Derived class function ";
}
int main()
{
	result s1;
	s1.display();
	s1.student::display();
	return 0;
}
