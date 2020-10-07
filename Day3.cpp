#include<iostream>
using namespace std;
const float pi=3.14;
class shape
{
	public:
	virtual void area()
	{
		cout<<"virtual function"<<endl;
	}
	void func()
	{
		cout<<"binded at compile time"<<endl;
	}
	
};
class circle:public shape
{
	protected:
		int r;
	public: 
		circle()
		{
			r=10;
		}
		virtual void area()
		{
			cout<<"The area of circle: "<<pi*r*r<<endl;
		}
};
class rectangle:public circle
{
	protected:
		int l,b;
	public:
		rectangle()
		{
			l=15;
			b=10;
		}
		void area()
		{
			cout<<"The area of rectangle: "<<l*b<<endl;
		}
};
class square:public rectangle
{
	protected:
		int a;
	public:
		square()
		{
			a=5;	
		}
		void area()
		{
			cout<<"The area of square: "<<a*a<<endl;
		}	
};
int main()
{
	shape *sptr,sh;
	rectangle r;
	circle c;
	square s;
	sptr=&c;
	sptr->area();//virtual function binded at run time
	sptr=&r; 
	sptr->area();//virtual function binded at run time
	sptr=&s;
	sptr->area();//virtual function binded at run time
	
	sptr->func();//Non-virtual function binded at compile time 
	return 0;
}
