//WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include<stdio.h>
#include<string.h>
void newstringswapFandL(char* str,char* str2);
void main(){
	char str[100];
	printf("enter you str string: ");
	scanf("%s",str);
	char str2[100];
	newstringswapFandL(str,str2);	
}

void newstringswapFandL(char* str,char* str2){

	int n=strlen(str);
	
	 if(n<=1){
	 	strcpy(str2,str);
	 }
	
	 else{
	 
	    str2[0]=str[n-1];
		str2[n-1]=str[0];
			    
	    for (int i=1;i<n-1;i++) {
        str2[i] =str[i]; 
        }
        
     }
	str2[n]='\0';
	printf(" string is : %s",str2);	

}
