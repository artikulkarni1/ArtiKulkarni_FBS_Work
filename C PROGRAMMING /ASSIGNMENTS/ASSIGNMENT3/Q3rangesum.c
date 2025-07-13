//Sum of numbers in given range.Find sum of numbers from start to end.
void main(){
	int n=0,start,end;
	printf("enter the starting range ");
	scanf("%d",&start);
	printf("enter the ending range ");
	scanf("%d",&end);
	

	 while(start<=end){
	 	n=n+start;
	 	start++;
	 }
	 printf("print the sum of rang is %d ",n);
	
}