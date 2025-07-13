//number is prime or not 
void main(){
	int n,i=1,count=0;
	printf("enter number\n");
	scanf("%d",&n);
	
	while(i <= n){
	    if(n%i == 0){
		  ++count;
	}
		  ++i;
	}
	if(count==2)
	printf("number is prime ");
	else 
	printf("number is not prime");
}