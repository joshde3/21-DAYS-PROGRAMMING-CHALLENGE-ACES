#include<iostream>
using namespace std;
class increment
{
	
	public:
		int x;
		increment()
		{
			x=10;
		}
		void operator ++();
		void display();
};
void increment::operator ++()
{
	this->x=x+1;
}
void increment::display()
{
	cout<<"No is "<<x;
}
int main()
{
	increment add;
	++add;
	add.display();
	return 0;
}
