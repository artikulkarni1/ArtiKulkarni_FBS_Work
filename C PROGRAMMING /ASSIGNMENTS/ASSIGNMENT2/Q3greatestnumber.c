// Write a program to find greatest of three numbers using nested if-else.
void main(){
	int a,b,c,result;
	printf("enter a value for a");
	scanf("%d",&a);
	printf("ente the value for b");
	scanf("%d",&b);
	printf("ente the value for c");
	scanf("%D",&c);
	
	if(a>b && a>c){
		printf("%d is the greatest number ",a);
		
	}
	else if(b>c){
		printf("%d is the greatest number",b);
	}
	else{
		printf("c is the greatest number ");
	}
}