//Find Sum of first and last digit of given number.

void main(){
	int n,fn,ln,sum;
	printf("etner the number");
	scanf("%d",&n);
	int temp=n;
	
	 	ln=n%10;
	 	while(n>10){
	 		n=n/10;
		 }
		 fn=n;
		 sum=fn+ln;
		 
	printf("sum of first and last number is %d",sum);	 
	 
}