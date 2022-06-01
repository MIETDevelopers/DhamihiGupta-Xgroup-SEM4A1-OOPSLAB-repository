#include<iostream>
using namespace std;
class sample1
{
	protected: float x,y;
	public:void get()
	{
		cout<<"\nenter first number:";
		cin>>x;
		cout<<"\nenter second number:";
		cin>>y;
	}
	void add ()
	{
		cout<<"add="<<x+y<<endl;
	}
		void diff ()
	{
		cout<<"diff="<<x-y<<endl;
	}
};
class sample2: public sample1
{
public:		void mul ()
	{
		cout<<"mul="<<x*y<<endl;
	}
		void div ()
	{
		cout<<"div="<<x/y<<endl;
	}
};
int main()
{
	sample2 obj;
	obj.get();
	obj.add();
	obj.diff();
	obj.mul();
	obj.div();
	return 0;
}
