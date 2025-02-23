#include<stdio.h>
int main()
{
	int a=10,b=15,c;
	c=a;
	a=b;
	b=c;
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}