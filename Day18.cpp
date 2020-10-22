#include<iostream>
using namespace std;

int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}

int fib(int n){
	if(n<=1){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main(){
	int a;
	cout<<"Enter a number "<<endl;
	cin>>a;
	cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
	cout<<"The "<<a<<"th term in fibonacci series is "<<fib(a)<<endl;
	return 0;
}
