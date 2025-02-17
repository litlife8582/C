/*Create a structure named Book to store book details like
 title, author, and price. Write a C program to input details
 for three books, find the most expensive and the lowest
 priced books, and display their information.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Books
{
    char name[50];
    char author[50];
    int price;
};
int main(){
    int n;
    printf("Enter the number of books: ");
    scanf("%d",&n);

    //Dynamically allocating memory
    struct Books *books=(struct Book *)malloc(n * sizeof(struct Books));

    if(books==NULL){
        printf("Memory allocaiton failed\n");
        return 1;
    }

    int min=10000,max=0;
    int min_index=0,max_index=0;


    for(int i=0;i<n;i++){
        getchar();
        printf("Enter details of book %d: \n",i+1);

        printf("Book name: ");
        fgets(books[i].name,sizeof(books[i].name),stdin);
        books[i].name[strcspn(books[i].name,"\n")]='\0';

        printf("Author name: ");
        fgets(books[i].author,sizeof(books[i].author),stdin);
        books[i].name[strcspn(books[i].author,"\n")]='\0';

        printf("Price: ");
        scanf("%d",&books[i].price);
        
        if(books[i].price>max){
            max=books[i].price;
            max_index=i+1;
        }
        else if(books[i].price<min){
            min=books[i].price;
            min_index=i+i;
        }
    }

    printf("Book Details: ");
    for(int i=0;i<n;i++){
        printf("Details of Book %d:\n",i+1);
        printf("Name:%s\n",books[i].name);
        printf("Author:%s\n",books[i].author);
        printf("Price:%d\n",books[i].price);
    }

    printf("Most expensive book is book no. %d with price %d\n",max_index,max);
    printf("Most cheap book is book no. %d with price %d\n",min_index,min);
    free(books);
    return 0;
}