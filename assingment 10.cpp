#include<stdio.h>
int main()
{
	double a,b;
	printf("enter a:");
	scanf("%if",&a);
	printf("enter b:");
	scanf("%if",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("%if \n",a);
	printf("%if \n",b);
	return 0;
}