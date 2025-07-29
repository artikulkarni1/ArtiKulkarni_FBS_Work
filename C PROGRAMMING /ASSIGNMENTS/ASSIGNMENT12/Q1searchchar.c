//Write a program to scan string from user then scan a single character and search it in a accepted string.
#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	printf("enter you str string: ");
	scanf("%s",str);
	char ch;
	printf("enter the character that you have to search: ");
	scanf(" %c",&ch);
	int i=0,count=0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			count=1;
			break;
		}
		i++;
	}
	if(count==1)
	 printf("found");
	else 
	 printf("not found ");
	 	
}