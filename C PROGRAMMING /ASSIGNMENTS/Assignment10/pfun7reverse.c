 //strrev(str)
 #include<stdio.h>
#include<string.h>
void main(){
	char str[10];
	printf("entere the string for str1:");
	scanf(" %s", str);
	printf("\n entered str1 is :[%s]",str);
	
	//reverse string
	 strrev(str);
	 	
	printf("\n reverse string is : %s",str);
	
}
