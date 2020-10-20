#include<iostream>
using namespace std;

int sum(int , int );
void g(void);

int main(){
	int n1,n2;
	cout<<"Enter 1st Number: "<<endl;
	cin>>n1;
	cout<<"Enter 1st Number: "<<endl;
	cin>>n2;
	cout<<"The sum is "<<sum(n1,n2);//n1 and n2 are actual Parameters
	g();
	
	
	return 0;
}
int sum(int a, int b)//a and b are formal parameters
{
	int c= a+b;
	return c;
}
void g(){
	cout<<"\nHello Good Morning";
}

