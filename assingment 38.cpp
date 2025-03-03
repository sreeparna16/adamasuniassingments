#include <stdio.h>

int main() {
    int i, j;

    
    for (i = 0; i < 3; i++) {
        printf("1 ");
    }
    printf("\n");

    
    for (i = 2; i <= 4; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d %d", i,i);
        }
        printf("\n");
    }

    return 0;
}


