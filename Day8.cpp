
#include<iostream>
using namespace std;
class student
{
		int x;
	public:
		void accept();
		void display();
};
void student::accept()
{
	cout<<"\n Accept number ";
	cin>>x;
}
void student::display()
{
	cout<<"\n The number is : "<<x;
}

int main()
{
	student s1, *objptr;
	objptr=&s1;
	objptr->accept();
	objptr->display();//base class function
	return 0;
}
