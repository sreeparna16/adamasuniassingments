#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) { 
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); 
    }
}

int main() {
    int n = 4; 
    printPyramid(n);
    return 0;
}