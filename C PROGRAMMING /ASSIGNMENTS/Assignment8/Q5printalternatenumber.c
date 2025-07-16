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
	//printing alternate element 
	int index;
	printf("\nenter the index you start from:");
	scanf("%d",&index);
	
		printf("\nalternate number in array you start index from are:\n");
		for(int i=index;i<n;i++){
		printf(" %d ",arr[i]);
		i++;
        	}
    	}     
