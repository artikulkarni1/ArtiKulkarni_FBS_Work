#include<stdio.h>
void main (){
	int a,b,c;
	char op;
	printf("enter the first numbers\n");
	scanf("%d",&a);
	
	printf("enter the second numbers\n");
	scanf("%d",&b);
	printf("enter the opartor:\n ");
		fflush(stdin);
	scanf("%c",&op);
	
	if(op == '+'){
		c=a+b;
		printf("addition of a & b is %d:",c);
	}
	else if(op == '-'){
		c=a-b;
		printf("substraction of a & b is:%d ",c);
	}
	else if(op == '/'){
			c=a/b;
		printf("division of a & b is:%d ",c);
	}
	else if(op == '*'){
			c=a*b;
		printf("multiplication of a & b is:%d ",c);
	}
	else if(op == '%'){
			c=a%b;
		printf("remainder of a & b is:%d ",c);
	}	
	else{
		printf("you enter wrong symbol");
	}	
}