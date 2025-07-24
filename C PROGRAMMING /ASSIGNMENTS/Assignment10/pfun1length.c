#include<stdio.h>
#include<string.h>
void main(){
	char str[10];
	printf("enter the string :");
	scanf(" %s", str);
	// length of string without \0
	int len= strlen(str);
	printf(" length of str string array is: %d",len);	
	printf("\nEntered string is : [ %s ]",str);
}
