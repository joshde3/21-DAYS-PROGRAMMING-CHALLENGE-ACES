#include<iostream>
#include<cmath>
using namespace std;

class complex{
	float real;
	float imag;
	public:
		void accept();
		void display();
		void mul(complex a, complex b){
			int x,y;
			x=(a.real*b.real) - (a.imag*b.imag);
			y=(a.real*b.imag) + (a.imag*b.real);
			cout<<"The Multiplication is "<<x<<"+j"<<y<<endl;
		}
		void div(complex a,complex b){
			int x,y;
			x=((a.real*b.real) + (a.imag*b.imag))/(pow(b.real,2)+pow(b.imag,2));
			y=((b.real*a.imag) - (b.imag*a.real))/(pow(b.real,2)+pow(b.imag,2));
			cout<<"The Division is "<<x<<"+j"<<y<<endl;
		}
};
void complex::display()
{
	cout<<real<<"+j"<<imag<<"\n";
}
void complex::accept()
{
	cin>>real>>imag;
}
int main(){
	complex c1,c2,c3,c4,c5;
	cout<<"Enter first complex number: "<<endl;
	c1.accept();
	cout<<"Enter second complex number: "<<endl;
	c2.accept();
	cout<<"First Complex Number: ";
	c1.display();
	cout<<"Second Complex Number: ";
	c2.display();
	c4.mul(c1,c2);
	c5.div(c1,c2);
	return 0;
}
