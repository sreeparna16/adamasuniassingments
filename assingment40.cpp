#include<stdio.h>
int sumofnterms(int n)
{
	if (n==1){
		return 1;
	}
	else{return n +sumofnterms(n-1);
}}
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("sum of n terms:%d/n",sumofnterms(n));
	return 0;
}
