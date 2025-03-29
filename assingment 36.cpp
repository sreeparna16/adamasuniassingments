#include <stdio.h>

void printPattern(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n - i; j++) {
            printf("   ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%2d ", num);
            num++; 
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}