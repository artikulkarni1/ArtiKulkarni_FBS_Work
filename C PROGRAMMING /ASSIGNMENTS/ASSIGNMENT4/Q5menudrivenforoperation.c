/*write a menu driven program to take a number for user and perform operations as follows.
Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/

void main(){
	int n,type,i,count,rev=0,temp,sum=0,rem;
	printf("welcome\n");
	printf("enter any value for n :\n");
	scanf("%d",&n);
	printf("enter any number\n1.To check even/odd \n2:To check prime/not\n3.To check pallindrome/not.\n4.check positive/negative/zero.\n5.To reverse a number.\n6.To find sum of digits \n");
	scanf("%d",&type);
	
	
	if(type == 1){
		if(n%2==0){
			printf("%d number is even",n);
		}
		else {
			printf("%d number is odd",n);
		}
	}
	
	else if(type == 2){
		for(i=2;i<n;i++){
			if (n=n/i){
			count++;
			}
		}
		if(count == 0){
			printf("number is prime ");
		}
		else{
			printf("number is not prime ");
		}
	}
	
	
	else if(type==3){
		temp=n;
		while(n!=0){
			int rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(temp==rev){
			printf("%d number is palindrome",temp);
		}
		else
		printf("%d not palindrome ",temp);
	}
	
	else if(type == 4){
		if(n==0)
		printf("number is zero ");
		else if(n>0)
		printf("%d number is positive",n);
		else 
		printf("%d number is negative",n);
	}
	
	
	else if(type==5){
		temp=n;
		while(n!=0){
			int rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		printf("%d is the revese number of %d",rev,temp);
		
	}
	
	
	else if(type ==6){
		temp=n;
		while(n!=0){
			rem=n%10;
			sum =sum +rem;
			n=n/10;
		}
		printf("sum of all digits of %d is %d ",temp,sum);
	}
	
	else {
		printf("enter valid number from 1 to 6");
	}
	
}