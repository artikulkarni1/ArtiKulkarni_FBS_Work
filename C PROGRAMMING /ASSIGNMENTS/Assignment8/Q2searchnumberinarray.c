//search the number in array .
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
	//search a number 
	int no;
	printf("\nenter any you have to search :");
	scanf("%d",&no);
	for(int i=0;i<n;i++){
		if(no==arr[i]){
			printf("\n number %d is found in array at index %d  ",arr[i],i);
		}
	
	}
	}