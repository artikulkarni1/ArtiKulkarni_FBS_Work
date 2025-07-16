//sum of all numbers in array .
#include <stdio.h>
void main(){
	int n;
	printf("enter any size for array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	
	// sum of numebr
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("\nsum of array is :%d",sum);
	
	
}
	