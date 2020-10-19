#include<iostream>
using namespace std;

typedef struct student
{
	int rollno;
	float percent;
	char year;
}st;

union money{
	int rice;
	float usd;
};

int main()
{
	st joshua;
	joshua.rollno=45;
	joshua.percent=92.45;
	joshua.year = 'i';
	cout<<joshua.rollno<<endl;
	cout<<joshua.percent<<endl;
	cout<<joshua.year<<endl;
	union money m1;
	m1.rice=10;
	m1.usd=70.45;
	cout<<m1.rice<<endl; //gives garbage value
	cout<<m1.usd<<endl;
	return 0;
}
