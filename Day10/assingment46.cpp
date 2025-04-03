#include <stdio.h>

int main() {
    int arr[] = {10, 50, 30, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    int i;
    printf("Array elements: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 1; i < n; i++)
	 {
        if (arr[i] > max)
		 {
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}

