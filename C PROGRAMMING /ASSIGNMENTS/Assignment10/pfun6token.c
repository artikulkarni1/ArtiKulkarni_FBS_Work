#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "i love c & cpp langauges ";
	printf("\n entered str1 is :[%s]",str1);
	
	//tokenization of string 
	char *tok=strtok(str1," ");
	while(tok!=NULL){
		printf("\ntoken:%s",tok);
		tok=strtok(NULL," ");
	}
}
