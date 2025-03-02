#include<stdio.h>
#include<math.h>
int main()
{
	double number,squareroot;
	printf("enter a number:");
	scanf("%f",&number);
	squareroot=sqrt(number);
	printf("square root %.2lf=%.2lf",number,squareroot);
	return 0;
}