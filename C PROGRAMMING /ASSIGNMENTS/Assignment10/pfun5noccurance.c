#include<stdio.h>
#include<string.h>
void main(){
	char str1[10];
    printf("enter the string str :");
	scanf("%s",str1);
	printf("Entered string is : [ %s ]",str1);
	
	// char occurrance in string 
	char a;
	printf("\nenter the character :");
	scanf(" %c",&a); 
	char *found=strchr(str1,a);
    if(found != NULL)
    printf("\n found ");
    else
    printf("\n not found ");
	}
		