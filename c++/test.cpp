#include<iostream>
#include<string.h>
using namespace std;
class A 
{
	
	
	public :
	void print()
	{
		cout<< "\nfrom parameter less";
	}
	void print(string x)
	{
		cout<<"\nI am from parameterized "<<x;
	}
	void print(string x, string y)
	{
		cout<<"\n I am jhapali\n"<<x<<y;
	}
	 private:A()
	{
		cout<<"\n meow meow";
	}
};
int main()
{
	A obj;
	obj.print();
	obj.print("aashish");
	obj.print("meow","hello");
return 0;
}
//class a
//private:
//	{
//		float a ,b,c;
//	}
//	public:
//		
//			void get()
//			{
//				cout<<"enttr "
//			}
//		}
