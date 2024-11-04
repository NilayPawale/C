#include <iostream>
using namespace std;
class Box{
	protected:
		int length = 0;
		public:
			friend int printlength(Box); //friend function
};
int printlength(Box b)
{
	b.length=b.length+10;
	return b.length;
}
int main()
{
	Box b;
	cout<<"Length of Box: "<<printlength(b)<<endl;
}