#include<stdio.h>
int main()
{
	int principle,rate,time,interrest;
	printf("enter the principle:");
	scanf("%d",&principle);
	printf("enter the rate:");
	scanf("%d",&rate);
	printf("enter the time:");
	scanf("%d",&time);
	interrest=(principle*rate*time)/100;
	printf("the simple interrest is %d",interrest);
	return 0;
}
