#include<iostream>
using namespace std;

void add(int, int);
void multiply(int, int);

void add(int a, int b)
{ 
	cout << a+b << "\n"; 
}

void multiply(int a, int b)
{ 
	cout << a*b << "\n"; 
}

int main() 
{
		//Declare a function pointer 
		void (*fptr)(int, int); 
		
		fptr = add; 
 		fptr(12, 3); 	
		fptr = multiply; 
 		fptr(12, 2);	 
		return 0;
 }

