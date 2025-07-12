/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above*/

void main(){
	int age,person;
	printf("enter the age\n");
	scanf("%d",&age);
	if(age<12 && age>=0){
		printf("you are is child\n");
	}
	else if(age>=12 && age<=19){
		printf("you are is Teenager\n");
	}
	else if(age>=20 && age<=59){
		printf("you are is Adult\n");
	}
	else if(age>=60){
			printf("you are is Senior\n");
	}
	else {
		printf("enter valid age\n ");
	}
}