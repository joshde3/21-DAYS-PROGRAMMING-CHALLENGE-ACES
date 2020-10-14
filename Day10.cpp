#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
/*void swap(int n, int m)
{
 int t;
 t=m;
 m=n;
 n=t;
}*/

int main() 
{  
  int a=100, b=200;  
  swap(a, b);  
  cout<<"Value of a "<<a<<endl;
  cout<<"Value of b "<<b;
  return 0;
}  


