#include<stdio.h>
#include<string.h>
int mystrlen(char *str);
void main(){
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("\nEntered string str is:[ %s ]",str);
	
	//function for copy string src to des string
	int len=mystrlen(str);
	printf("\nlength of string is: %d",len);
	
}
int mystrlen(char *str){
	 int i=0;
	 while(str[i]!='\0'){
	 	i++;
	 }
	 return i;
}