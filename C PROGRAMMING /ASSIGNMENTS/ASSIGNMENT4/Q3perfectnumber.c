//Print perfect numbers in the given range 1 to n.
void main(){
	int i,j,n,sum;
	printf("enter the of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int temp=i;
		int sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
			int devisor=j;
			sum=sum+devisor;
		}
	}
	if(sum==temp){
		printf("perfect number is :%d\n",temp);
	}
}
}