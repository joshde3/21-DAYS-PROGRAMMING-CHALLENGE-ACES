#include<iostream>
using namespace std;

inline int product(int a,int b){
	return a*b;//replaces the function with actual code at compile time
}
int func(int a,int b){
	static int c=0;//executes only once
	++c;
	return a*b+c;
}
int moneyReceived(int money,float interest=1.04){
	return money*interest;
}
int main(){
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"The product of and b is "<<product(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	cout<<"The value is "<<func(a,b)<<endl;
	int money = 100000;
	cout<<"If you have "<<money<<" Rs in your Account you will get "<<moneyReceived(money)<<" RS after 1 year"<<endl;
	cout<<"For VIP, If you have "<<money<<" Rs in your Account you will get "<<moneyReceived(money,1.1)<<" RS after 1 year";
	
	return 0;
}
