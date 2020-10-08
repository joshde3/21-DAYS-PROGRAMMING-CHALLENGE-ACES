#include<iostream>
using namespace std;
class add
{
	protected:
		int n;
	public:
	add()
	{
		cout<<"Unary operator overloading using friend function"<<endl;		
	}
	void getdata()
	{
		cout<<"Enter the number to be incremented:"<<endl;
		cin>>n;
		cout<<"The number is "<<n<<endl;
	}	
	void display()
	{
		cout<<"The incremented number is "<<n<<endl;
	}
	friend void operator ++(add&);
	
};
void operator ++(add &n)
{
	n.n+=1;
}
int main()
{	
	add n1;
	n1.getdata();
	++n1;
	n1.display();
	return 0;
}
