/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/

void main(){
	int n;
	printf("enter the marks ");
	scanf("%d",&n);
	
	if(n<100 && n>75){
		printf("you are pass with distinction ");
	}
	else if(n>65 && n<=75){
		printf("you are pass with First class");
	}
	else if(n>55 && n<=65){
		printf("you are pass with second class");
	}
	else if(n>=40 && n<=55){
		printf("you are pass");
	}
	else if(n<40 && n>=0){
		printf("you are fail");
	}
	else{
		printf("enter the valid marks ");
	}
}