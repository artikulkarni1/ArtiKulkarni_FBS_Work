#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct block of book.
typedef struct Book{
	int bID;
	char bName[20];
	char AuthName[20];
	char Category[20];
    float Price;
	int  Rating;
}Book;

struct Book* arr[100];//array pointer for books
int count=0;

//declaration 
void AddBook();                  ///add
void searchbook();
void displayALLBooks();             //display
void removeBook();
void ShowAuthorBooks();
void showCategoryBooks();
void updateBook();
void sortedBook();


//main function
void main(){
	int ch;
	do{
	   printf("\n************* Book Management System ************* \n");
        printf("1. Add Book\n");
        printf("2. Search Book\n"); 
        printf("3. Display All Books\n");
        printf("4. Remove Book\n");
        printf("5. Show Author's Books\n");
        printf("6. Show Category's Books\n");
        printf("7. Update Book Data\n ");
        printf("8. Display Sorted Books:\n");
        printf("10. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
	
    	switch(ch){
  	    case 1:
		  AddBook(); 
		  break;
		case 2:           //case 1 for add book	
	        searchbook();
            break;
        
        case 3:
		   displayALLBooks();         
            break;
            
        case 4:
        	removeBook();
        	break;
        
        case 5:
        	ShowAuthorBooks();
        	break;
        	
        case 6:
        	showCategoryBooks();
        	break;
        	
        case 7:
           updateBook();
           break;
           
        case 8:
        	sortedBook();
        	break;
        	
        case 9:
        	printf("\n--INVLAID CHOICE ---\n");
        	break;
        }
			
	 } while (ch!=10);
	 
	 printf("\n--EXIT--\n");
		
}


//addbook function
void AddBook(){


      struct Book* temp = (Book*)malloc(sizeof(Book));
	    	
        	printf("\n[ENTER YOUR BOOK DETAILS]\n");
        	printf("\nBOOK ID:");
            scanf("%d",&temp->bID);
            printf("BOOK NAME:");
            scanf("%s",temp->bName);
            printf("AUTHER NAME:");
            scanf("%s",temp->AuthName);  
            printf("CATEGORY OF BOOK:");
            scanf("%s",temp->Category);
            printf("PRICE OF BOOK:");
            scanf("%f",&temp->Price);
            printf("RATINGs OF BOOK:");
            scanf("%d",&temp->Rating);
	        arr[ count++]=temp;   	 
    	   
    	   
	     printf("\n ----------YOUR BOOK DATA ADDED SUCCESSFULLY------\n");

        
}


//search function
void searchbook(){
	int choice,found;
	printf("Search by:\n1. Book ID\n2. Book Name\n3. Author Name\nEnter Choice : ");
	scanf(" %d", &choice);
	
	if(choice ==1)
	{
		int id;
		printf("\nEnter Book ID : ");
		scanf("%d", &id);
		
		for(int i=0;i<count;i++)
		{
			if(arr[i]->bID==id)
			{
				printf("\nBook Found:\n");
                printf("Name: %s\n", arr[i]->bName);
                printf("Author: %s\n", arr[i]->AuthName);
                printf("Category: %s\n", arr[i]->Category);
				found=1; 
	            break; 		
			}
		}
		
	}
	else if(choice ==2) 
	{
        char name[50];
        printf("Enter Book Name : ");
        scanf(" %[^\n]", name);

        for (int i = 0; i < count; i++) 
		{
			  found=0;
            if (strstr(arr[i]->bName, name)) 
			{
                printf("\nBook Found:\n");
                printf("ID: %d\n", arr[i]->bID);
                printf("Name: %s\n", arr[i]->bName);
                printf("Author: %s\n", arr[i]->AuthName);
                found=1;
            }
          
        }
    }
    else if (choice ==3) 
	{
        char author[50];
        printf("Enter Author Name :  ");
        scanf(" %[^\n]", author);
        
        for (int i = 0; i < count; i++) 
		{
			found=0;
            if (strstr(arr[i]->AuthName, author)) 
			{
                printf("\nBook Found:\n");
                printf("ID: %d", arr[i]->bID);
                printf("\nName: %s", arr[i]->bName);
                printf("\nAuthor: %s\n", arr[i]->AuthName);
                found=1;
            }
         
        }
    }

    else 
	{
        printf("Invalid choice.\n");
        found=0;
        
    }
    
    if(found!=1)
    printf("not found ");
}


//for display all books in added in array 
void displayALLBooks(){
	if (count == 0 )
	{
		printf("No Books To Display");
		return;
	}

	for(int i=0;i<count;i++)
	{
		printf("\n -----YOUR BOOK DATA%d IS ----",i+1);
		printf("\nBook ID : %d", arr[i]->bID);
		printf("\nName : %s", arr[i]->bName);
		printf("\nAuthor: %s", arr[i]->AuthName);
		printf("\nCategory : %s", arr[i]->Category);	
		printf("\nprice : %f", arr[i]->Price);	
		printf("\nratings : %d\n", arr[i]->Rating);	
	}
}

//to remove perticular book data using its uniqueid 
void removeBook(){
	int rem,found=0;
	printf("Enter Book id to remove BOOK data:");
	scanf("%d",&rem);
	
	for(int j=0;j<count;j++){
	   
     	if(arr[j]->bID == rem){
		  free(arr[j]);		
		   for(int i=j;i<count;i++){
		    	arr[i]=arr[i+1];		          
	          	found=1;       	
	    	}
	    printf("\n----BOOK DATA REMOVED SUCCESSFULLY----\n");
		count--;
    	}
   		
	}
	
	if(found!=1)
	printf("-Not found Enter Another BOOK ID-");

}

//show only that authors book.
void ShowAuthorBooks(){
	char auth[20];
	int found=0,n=1;
	printf("ENTER AUTHOR NAME : ");
	scanf("%s",auth);
	for(int i=0;i<count;i++){
	
		if(strcmp(arr[i]->AuthName,auth)==0){              // if user entered auther is eaquals to presented auth in array
		  printf("\n -----BOOK DATA %d of AUTHOR %s ----",n++,auth);
		  printf("\nBook ID : %d", arr[i]->bID);
		  printf("\nName : %s", arr[i]->bName);
		  printf("\nAuthor: %s", arr[i]->AuthName);
		  printf("\nCategory : %s", arr[i]->Category);
		  printf("\nPrice : %f", arr[i]->Price);
		  printf("\nRatings : %d\n", arr[i]->Rating);
		  found=1;
		}
	}
	if(found!=1)
	printf("\n---Author not found---\n");	
}


// creating function for retieve book list of same category .
void showCategoryBooks()
{
	char cat[30];
	printf("Enter Category :");
	scanf("%s", cat);
	int found=0,n=1;
	
	for(int i=0;i<count;i++)
	{      
		if(strcmp(arr[i]->Category, cat) == 0)
		{
			printf("\n%d] ID: %d \n BOOKNAME: %s\nAUTHORNAME: %s\n",n++,arr[i]->bID,arr[i]->bName,  arr[i]->AuthName);
			found = 1;
		}
	}
	
	if(!found)
	   printf("No books in this category\n");
}

// to update the book price and rating.
void updateBook()
{
	
	int id,found=0;
	printf("Enter Book ID to Update : ");
	scanf("%d", &id);
	
	for(int i=0;i<count;i++)
	{
		if(arr[i]->bID ==id)
		{
			printf("Enter new Price : ");
			scanf("%f",&arr[i]->Price);
			printf("Enter new Rating : ");
			scanf("%d", &arr[i]->Rating);
            printf("Book updated successfully\n");
			found=1;
		}
	}
	if(found!=1)
	printf("Book not found\n");
}


//to sort the collection of books on their Highest/Lowest price and ratings.
void sortedBook(){
    int choice;
    printf("\nCHOICE FOR BOOK LIST:\n");
    printf("1] HIGHEST PRICE\n2] LOWEST PRICE\n3] HIGHEST RATINGS\n4] LOWEST RATINGS\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    if (count == 0) {
        printf("\nNo books available to sort.\n");
        return;
    }

    // Create a temporary array to hold pointers to books
    struct Book* temp[100];
    for (int i = 0; i < count; i++) {
        temp[i] = arr[i];
    }

    // Sort using bubble sort
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            int shouldSwap = 0;

            if (choice == 1 && temp[j]->Price < temp[j + 1]->Price) {
                shouldSwap = 1;  // Highest Price
            } else if (choice == 2 && temp[j]->Price > temp[j + 1]->Price) {
                shouldSwap = 1;  // Lowest Price
            } else if (choice == 3 && temp[j]->Rating < temp[j + 1]->Rating) {
                shouldSwap = 1;  // Highest Ratings
            } else if (choice == 4 && temp[j]->Rating > temp[j + 1]->Rating) {
                shouldSwap = 1;  // Lowest Ratings
            }

            if (shouldSwap) {
                struct Book* t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    // Display sorted books
    printf("\n----- Sorted Book List -----\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook ID   : %d", temp[i]->bID);
        printf("\nName      : %s", temp[i]->bName);
        printf("\nAuthor    : %s", temp[i]->AuthName);
        printf("\nCategory  : %s", temp[i]->Category);
        printf("\nPrice     : %.2f", temp[i]->Price);
        printf("\nRating    : %d\n", temp[i]->Rating);
    }
}


