/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount*/

void main(){
	int price,discount,p;
	char type;
	printf("Enter price from user\n");
	scanf("%d",&price);
	printf("you are a student ? type y/n \n ");
	scanf(" %c",&type);
	
	if(type == 'y'){
	 
	  if(price>500){
		discount=price*0.20;
		p=price-discount;
		printf("you have 20percent discount \n your price is\n: %d",p);
     	}
   	  else {
		discount=price*0.10;
		p=price-discount;
		printf("you have 10percent discount \n your price is: %d",p);
    	}
    }
	else if (type =='n'){
		 if(price>600){
		discount=price*0.15;
		p=price-discount;
		printf("you have 15% discount \n your price is: %d",p);
     	}
     	else {
     		printf(" your price is: %d\npurchase more for discount",price);
		 }
		
	}
	else {
		printf("enter the valid type y/n");
	}
	
}