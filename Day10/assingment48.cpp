#include<stdio.h>
int main(){
	int arr[100];
	int n,i,k,f=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search: ");
		scanf("%d",&k);
		for(i=0;i<n;i++){
			if(arr[i]==k){
				printf("Element %d found at index %d\n",k,i);
				f=1;
				break;
			}
		}
		if (f==0){
			printf("Element %d not found in the array\n",k);
		}
	
	return 0;
}
