//Write a program to check given 3 digit number is pallindrome or not.
void main(){
	int n,rev=0,mn,ln;
	
	printf("enter the number");
	scanf("%d",&n);
	if(n>=100 && n<=999){
		 int fn=n/100;
		 mn=(n%100)/10;
		 ln=n%10;
		 rev=ln*100+mn*10+fn;
		 printf("%d",rev);
	}
}