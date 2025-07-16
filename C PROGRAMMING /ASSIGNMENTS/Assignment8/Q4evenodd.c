//finds even odd numbers in array .
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
	
	//for even/odd numbers
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
		printf("\nnumber is even %d ",arr[i]);
		}
		if(arr[i]%2==1)
		{
		printf("\nnumber is odd %d ",arr[i]);
	}
	}
}
	