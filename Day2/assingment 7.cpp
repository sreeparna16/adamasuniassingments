#include<stdio.h>
int main()
{
	float radius,area;
	float pi=22.0/7.0;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of the circle is %f",area);
	return 0;
}
