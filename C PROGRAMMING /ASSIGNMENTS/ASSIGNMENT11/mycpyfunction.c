#include<stdio.h>
#include<string.h>
void mystrcpy(char *des,char *str);
void main(){
	char str[100];
	char des[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("\nEntered string str is:[ %s ]",str);
	
	//function for copy string src to des string
	mystrcpy(des,str);
	
	
	printf("\ncopied string des is:[ %s ]",des);
}
void mystrcpy(char *des,char *str){
	 int i=0;
	 while(str[i]!='\0'){
	 	des[i]=str[i];
	 	i++;
	 }
}