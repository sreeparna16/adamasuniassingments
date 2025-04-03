#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter the second:");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is the greater than %d",num1,num2);
	}
	else if (num2>num1)
	{
		printf("%d is the greater than %d",num2,num1);
	}
	else
	{
		printf("both numbers are equal",num1=num2);
	}
	return 0;
}
