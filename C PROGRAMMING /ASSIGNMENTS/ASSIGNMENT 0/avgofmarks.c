void main(){
	int java,c,cpp,python,css,per,total;
    	printf("enter the java marks:");
    	scanf("%d",&java);
	    printf("enter the python marks:");
	    scanf("%d",&c);
    	printf("enter the c marks:");
    	scanf("%d",&cpp);
		printf("enter the cpp marks:");
		scanf("%d",&css);
		printf("enter the css marks:");
		scanf("%d",&python);
		
		total=java + c + cpp + python + css;
		printf("total marks is: %d",total);
		per=(total/500)*100;
		printf("%d",per);
	
}