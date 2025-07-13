//Check the given number is Palindrome number or not. 
void main(){
	int n,rev=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	int temp=n;
	
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev){
		printf("number is palindrome");
	}
	else{
		printf("number not palindrome");
	}
}