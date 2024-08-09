/*pointer program*/
#include<stdio.h>
int main()
{
	int a=5,b=8,sum;
	int *pa,*pb,*psum;
	pa=&a;
	pb=&b;
	psum=&sum;
	
	*psum=*pa+*pb;
	printf("sum=%d",*psum);
	getc;
	return 0;
	
}