#include <iostream>
using namespace std;

class start 
{
	public:
		int a;
		
		void set()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
		}
		void display()
		{
			cout<<"A = "<<a<<"\n";
		}
};

class final : public start
{
	public:
		int b;
		
		
		
		void set1()
		{
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		
		void display1()
		{
			cout<<"C = A * B "<<a*b<<"\n";
		}
};

int main()
{
	final F;
	F.set();
	F.set1();
	F.display1();
	
	return 0;
}
