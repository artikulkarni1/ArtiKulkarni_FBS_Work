//WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
#include<string.h>
void removenTHelement(char* str,int ch);
void main(){
	char str[100];
	printf("enter you str string: ");
	scanf("%s",str);
	int ch;
	printf("enter the index you want to remove :");
	scanf("%d",&ch);
	removenTHelement(str,ch);
}
void removenTHelement(char* str, int ch){

	int i=0;
	while(str[i]!='\0'){
		if(i==ch){
			int t=i;
			while(str[t]!=0){
			str[t]=str[t+1];
			t++;
		}
		}
		i++;
	}
	printf("%s",str);	 	
}