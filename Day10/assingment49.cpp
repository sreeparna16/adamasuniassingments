#include<stdio.h>
int squareCallByValue(int x){
	x=x*x;
	printf("Inside squareCallByValue: x=%d\n",x);
	return x;
}
void squareCallByReference(int *x){
	*x=(*x) * (*x);
	printf("Inside SquareCallByReference: *x=%d\n",*x);
}
int main(){
	int n1,n2;
	printf("Enter two integers:");
	scanf("%d %d",&n1,&n2);
	printf("\n--- Call by Value ---\n");
	printf("original value of n1: %d\n",n1);
	int result = squareCallByValue(n1);
	printf("Returned value from squareCallByValue: %d\n",result);
	printf("Final value of n1: %d\n",n1);
	printf("\n-- Call by Reference ---\n");
	printf("Original value of n2: %d\n",n2);
	squareCallByReference(&n2);
	printf("Final value of n2: %d\n",n2);
	return 0;
	
}
