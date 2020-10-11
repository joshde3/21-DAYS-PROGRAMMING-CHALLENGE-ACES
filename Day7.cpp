#include <iostream>
using namespace std;

void repchar(); //declarations
void repchar(char);
void repchar(char, int);

int main()
{
repchar();
repchar('=');
repchar('+', 45);
return 0;
}

void repchar()
{
for(int j=0; j<45; j++) // always loops 45 times
cout <<"*"; // always prints asterisk
cout << endl;
}
void repchar(char ch)
{
for(int j=0; j<45; j++) // always loops 45 times
cout <<ch; // prints specified character
cout << endl;
}
void repchar(char ch, int n)
{
for(int j=0; j<n; j++) // loops n times
cout <<ch; // prints specified character
cout << endl;
}


