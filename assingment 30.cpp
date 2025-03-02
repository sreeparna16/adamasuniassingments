#include <stdio.h>
int main() 
    {
    int number,count;
	printf("Enter a number:=");
    scanf("%d",&number);
    while (number!= 0)
	 {
        number=number/10;
        count++;
    }
		printf("number of digits is =%d",count);
    return 0;
}

