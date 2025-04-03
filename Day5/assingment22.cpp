#include <stdio.h>

int main() 
{
    char input;
    printf("Enter 'H' for Heads or any other key for Tails: ");
    scanf(" %c", &input); 
    if (input == 72) 
	{
        printf("Result: Heads\n");
    } else 
	{
        printf("Result: Tails\n");
    }
    return 0; 
}
