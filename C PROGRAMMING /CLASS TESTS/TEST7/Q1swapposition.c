//write a programe to accept array and exchange data of xth position to yth position
#include<stdio.h>
#include<string.h>

void main(){
	char str[100];
	printf("enter the string 1:");
	scanf("%s",str);
	int a,b;
	printf("enter the xth index:");
	scanf("%d",&a);
	printf("enter the yth index:");
	scanf("%d",&b);
	a=a-1;
	b=b-1;
	char temp;
	temp=str[a];
	str[a]=str[b];
	str[b]=temp;
	
	printf("array is:[ %s ]",str);
}

