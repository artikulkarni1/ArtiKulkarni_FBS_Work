//Check the given number is Armstrong number or not..
void main(){
	int n,sum=0,rem;
	printf("enter the number:\n");
	scanf("%d",&n);
	int temp=n;
	
	while(n!=0){
		rem = n%10;
		sum =sum + rem*rem*rem;
		n = n/10;
	}
	if(temp == sum){
		printf("number is armstrong");
	}
	else{
		printf("number is not armstrong");
	}
}