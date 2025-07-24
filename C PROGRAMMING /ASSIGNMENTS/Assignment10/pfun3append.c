#include<stdio.h>
#include<string.h>
void main(){
	char str[20];
	char temp[20];
	printf("enter the string str :");
	scanf(" %s", str);
	printf("enter the string temp :");
	scanf(" %s", temp);
	printf("\nEntered string str is : [ %s ]",str);
	printf("\nEntered string temp is : [ %s ]",temp);


	// append str to end of temp string
	strcat(temp,str);
	printf("\n appending str to temp: [ %s ]", temp);
	
	//enter char to append end of to des string
	strncat(temp, str ,3);
	printf("\n after appending first 3char to temp2 \nthe string array is: [ %s ]",temp);		
}
