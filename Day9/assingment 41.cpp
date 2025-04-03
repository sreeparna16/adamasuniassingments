#include<stdio.h>
fact(int n)
{
	if(n==0||n==1){
		return 1;
	}else{
		return n * fact(n-1);
	}
}
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("fact of n:%ld\n",fact(n));
	return 0;
}
