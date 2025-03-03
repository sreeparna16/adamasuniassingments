#include <stdio.h>

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {  
            printf("%d", j);
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