#include<stdio.h>
#include<string.h>
void main(){
	char str1[10];
	char str2[10];
	printf("entere the string for str1:");
	scanf(" %s", str1);
	printf("entere the string for str2:");
	scanf(" %s", str2);
	printf("\n entered str1 is :[%s]\n entered str2 is:[%s]",str1,str2);
	
	//compare 2 strings
	int compare=strcmp(str1,str2);
	printf("\n It returns : %d",compare);
	if(compare ==0)
	  printf("\nstrings are equal");
	if(compare<0)
	  printf("\nstr1 is smaller than str2");
	if(compare>0)
	  printf("\nstr1 is greater than str2");
	  
    //compare n numbers from 2 strings
    printf("\ncomparison of first 3 numbers ");
	int compare2=strncmp(str1,str2,3);
	printf("\n It returns : %d",compare2);
	
	if(compare2 ==0)
	  printf("\nstrings are equal");
	if(compare2<0)
	  printf("\nstr1 is smaller than str2");
	if(compare2>0)
	  printf("\nstr1 is greater than str2");
	
	
	  
}
