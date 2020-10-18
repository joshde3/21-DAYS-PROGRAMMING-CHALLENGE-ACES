#include<iostream>
using namespace std;

enum day{Sunday, Monday, Wednesday, Friday};
//enum {off, on};

int main()
{
	enum {off, on};
	day D1=Monday;
	day D2= day(3);// alternate method 
	
	int d;
	int d1=Sunday;
	
	int button_1= off;
	int button_2=on;
//	cin>>D1; //invalid
	cout<<"\nEnter Day :";
	cin>>d;
	
	if(d==d1)
		cout<<"\n Same day";
		
	cout<<"\n Event Days are "<<D1<<" and "<<D2;
	cout<<"\n Event Days are "<<D1+1<<" and "<<D2;
	
	return 0;
}
	
