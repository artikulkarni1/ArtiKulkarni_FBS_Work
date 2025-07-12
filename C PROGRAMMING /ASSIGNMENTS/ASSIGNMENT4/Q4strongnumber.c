//Print strong numbers in the given range 1 to n.
void main(){
	int i,f,n,sum=0;
	f=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	int temp=n;
		while(n!=0){
			n=n%10;
			
	    	for(i=n;i>=1;i--){
			int f=f*i;
		}
	  sum=sum+f;
		n=n/10;
	}
	if(sum==temp){
		printf("strong number");
	}
	else{
	printf("not");	
	}
	
}