void main(){
	int u,bill;
	printf("enter the units :");
	scanf("%d",&u);	
	
	if(u>=1&&u<=50){
		printf("30rs /unit \n");
		bill=u*30;
		printf("total electricity bill is:%d",bill);
}
	else if (u<=150&&u>=51){
		printf("40rs /unit \n");
		bill=u*40;
		printf("total electricity bill is:%d",bill);
	}
		else if (u>150){
		printf("50rs /unit \n");
		bill=u*50;
		printf("total electricity bill is:%d",bill);
	}
}

