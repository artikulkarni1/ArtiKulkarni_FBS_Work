void main(){
	char ch;
	printf("enter the char here\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("it is vowel");
	}
	else if (ch>='A' && ch<'Z'||ch>'a' && ch<'z'){
		printf(" it is consonent");
	}
	else {
		printf("it is special symbol");
	}
}