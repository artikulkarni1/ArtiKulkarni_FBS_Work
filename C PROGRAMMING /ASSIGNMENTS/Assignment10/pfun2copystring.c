#include<stdio.h>
#include<string.h>
void main(){
	char str[10];
	char temp[10];
	char temp2[10];
	printf("entere the string for str:");
	scanf(" %s", str);
	printf("\nbefore copy\n Entered str is : [ %s ]\ntemp1 is :[%s]\n temp2 is:[%s]",str,temp,temp2);
	
	//copy string from src to temp
	strcpy(temp,str);
	printf("\n after copy\n str in temp is: [ %s ]", temp);
	
	//copy first n char to des(temp2)
	strncpy(temp2,str ,3);
	printf("\n & copied first 3char from src to temp2 \nthe temp2 is: [ %s ]",temp2);
		
}
