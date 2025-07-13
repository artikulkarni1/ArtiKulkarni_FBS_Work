//Find factorial of given number.

void main(){
	int n,fact=1,i,rem,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	
	
	 		for(i=n;i>0;i--){
	 		fact=i*fact;
	 		sum=sum+fact;

}
	printf("factorial is \n%d",fact);
}