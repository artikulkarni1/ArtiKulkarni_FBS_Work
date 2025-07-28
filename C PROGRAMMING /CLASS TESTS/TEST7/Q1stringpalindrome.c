//check if string is palindrome or not 
#include<stdio.h>
#include<string.h>

void main(){
	char str[100];
	printf("enter the string 1:");
	scanf("%s",str);
	int n=strlen(str);
	printf("str length is:%d",n);
	int i=0,ispalindrome=1;
	char temp;
	while(i<n/2){	
    if(str[i]!=str[n-i-1]){
      ispalindrome=0;
      break;
    }
	i++;
	}
	if(ispalindrome)
	printf("\nstring is  palindrome ");
	else 
	printf("\nstring is not palindrome");

}