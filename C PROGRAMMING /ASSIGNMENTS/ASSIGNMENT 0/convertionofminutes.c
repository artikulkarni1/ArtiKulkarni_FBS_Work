void main(){
	int m,c,rem;
	printf("enter the minutes:");
	scanf("%d",&m);
	
	c=m/60;
	rem=m%60;
	printf("conversion of minutes %d is:\n %d hours &  %d minutes",m,c,rem);
}