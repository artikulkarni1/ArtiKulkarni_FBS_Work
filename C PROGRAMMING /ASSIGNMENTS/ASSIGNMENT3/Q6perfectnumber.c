//Check the given number is Perfect number or not;  Input: n = 28 ,   Output: Perfect

void main(){
	int n,i=1,sum=0,no;
	printf("enter the number\n");
	scanf("%d",&n);
	int temp=n;
	
     while(i<=n){
		if(n%i==0){
			no=sum+i;
		}
		i++;
	}
	if(temp == no){
		printf("perfect number");
	}
	else{
	printf("not perfect number");
}
	
}