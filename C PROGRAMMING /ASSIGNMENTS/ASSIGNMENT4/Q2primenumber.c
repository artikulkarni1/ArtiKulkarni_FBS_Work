//Print prime numbers in the given range 1 to n.
void main(){
	int i,j,n,count;
	printf("enter value range n:");
	scanf("%d",&n);
	printf("prime numbers from 1 to %d are:\n",n);
	
	for(i=1;i<=n;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\n",i);
		}
			
	}
	
}