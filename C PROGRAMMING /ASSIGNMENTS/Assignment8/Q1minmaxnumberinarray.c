//find the min and max number in array.
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
	
	//printing max number in array 
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++){
		
		if(arr[i]>max){
			max=arr[i];
		}

		if (arr[i]<min){
			 min = arr[i];
			}
}
		printf("\nmaximum number in array: %d",max);
		printf("\nminimum number in array: %d",min);



}