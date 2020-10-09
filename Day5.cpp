#include<iostream>
using namespace std;
class complex
{
		float real;
		float imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		void accept();
		void display();
		complex operator+(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		friend complex operator-(complex x, complex y);
		friend istream & operator>>(istream &, complex& );
		friend ostream & operator<<(ostream &, complex& );
};
istream & operator>>(istream & din, complex& c)
{
	din>>c.real>>c.imag;
	return din;
}

ostream & operator<<(ostream & dout, complex& c)
{
	dout<<c.real<<" +j "<<c.imag;
	return dout;
}

complex operator-(complex x, complex y)
{
	complex temp;
	temp.real=x.real-y.real;
	temp.imag=x.imag-y.imag;
	return temp;	
}
void complex::accept()
{
	cin>>real>>imag;
}
void complex::display()
{

	cout<<real<<"+j"<<imag;
}
int main()
{
	complex c1,c2,c3;
	cout<<"\n Enter First Complex number :";
	cin>>c1;
	
	cout<<"\n Enter Second Complex number :";
	cin>>c2;
	
	cout<<"\n First Complex number is :";
//	c1.display();
	cout<<c1;
	cout<<"\n Second Complex number is :";
//	c2.display();
	cout<<c2;
	cout<<"\n Addition is : ";

//	c3= c1.addition(c2);
	c3= c1+c2;
	cout<<c3;
	
	c3= c1-c2;
	
	cout<<"\n Substraction is :";
	cout<<c3;
	
	return 0;
}
