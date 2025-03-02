#include <stdio.h>

int main() 
{
    int n, rev=0,num;
	printf("Enter number= ");
    scanf("%d", &num);
	while (num != 0)
	 {
        rev=rev*10+(n%10);
        n=n/10;
    }
	printf("%d",rev);
	return 0;
}


