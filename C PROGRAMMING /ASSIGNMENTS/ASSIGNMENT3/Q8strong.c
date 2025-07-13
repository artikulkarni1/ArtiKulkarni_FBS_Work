//Check the given number is Strong number or not.sum of fact of each

void main(){
	int n,sum=0,fact=1,rem,i;
	printf("enter the number");
	scanf("%d",&n);
	int temp=n;
	
	while(n!=0){
	rem=n%10;
	fact=1;
	for(i=rem;i>0;i--){
	 		fact=i*fact;
	 	
    }
    sum=sum+fact;
    n=n/10;
}
  if(temp==sum){
  	printf("strong number");
  }
  else{
  	printf("not strong number");
  }
}
