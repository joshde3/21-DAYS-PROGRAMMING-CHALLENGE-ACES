#include <iostream>
using namespace std;
int main()
{ //array
	int intarray[5] = { 31, 54, 77, 52, 93 };
	cout<<intarray<<endl;
	for(int j=0; j<5; j++) //for each element,
		cout << *(intarray+j) << endl; //print value
	
	cout<<"\nusing another pointer "<< endl;
	int *p;
	p=intarray;
	for(int j=0; j<5; j++) //for each element,
		cout << (p++) << endl; 
	return 0;
}


