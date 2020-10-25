#include <iostream> 
using namespace std;

class B; 
class A { 
public: 
	void showB(B&); 
}; 
class B { 
private: 
	int b; 
public: 
	B() { b = 0; } 
	friend void A::showB(B& x); //friend function
}; 
void A::showB(B& x) 
{ 
	cout << "B::b = " << x.b; 
} 

int main() 
{ 
	A a; 
	B x; 
	a.showB(x); 
	return 0; 
}

