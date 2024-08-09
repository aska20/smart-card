#include<iostream>
using namespace std;
class A
{
	public :
		int a;
		int b;
		int c;
		
		public :A()
			{
			a=30;
			b=20;
			}
			A(int x, int y)
			{
				a = x;
			b = y;
			
			}
		public:
			sum(){
				cout<<"\nthe sum is "<<a + b;
			}
			sum(int a,int b)
			{
			cout<<"\nthe sum is "<<a + b;	
			}
		
};
int main()
{
	A obj(10,2);
	A bbj;
	obj.sum();	
	cout<<"\nobj values are "<<obj.a <<" "<<obj.b;
		cout<<"\nbbj values are "<<bbj.a<<" "<<bbj.b;
	bbj.sum();
}
