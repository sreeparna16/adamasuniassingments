#include <stdio.h>
int main() 
{
    int num, pdt=1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
        for (int i= 1; i <= num; i++) 
		{
            pdt = pdt* i;
        }
        
        printf("Factorial of %d is %lld.\n", pdt);
    

    return 0;
}
