#include <iostream>
using namespace std;
class Explicitex
{
   	private:
       int x;
	public:
    explicit Explicitex(int y) 
    {
      x=y;
    }
    int getdata()
    { 
      return x;
    }
};
void fun1 (Explicitex E1)
{
  int z = E1.getdata();
  cout<<z;
}
int main() {
   fun1(Explicitex(4));
   return 0;
}



