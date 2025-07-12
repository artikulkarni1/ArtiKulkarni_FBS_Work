// Print armstrong numbers in the given range 1 to n (cube root of each is equal to itself number).
void main(){
	int i,n,result,rem;
	printf("enter the number here:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result=0;
		int num=i;
		int temp=num;
		
	while(num!=0){
		rem=num%10;
		result=result+rem*rem*rem;
		num=num/10;
	}
	if(result==temp){
		printf("%d number is armstrong number:\n",temp);
	}
	
}
}