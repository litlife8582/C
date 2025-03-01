#include<stdio.h>
#include<stdlib.h>
struct book{
    int id;
    char name[50];
    char author[50];
    char publisher[50];
    int num;
    float price;
};

int main(){
    int n;
    scanf("%d",&n);
    struct book* ptr=(struct book*)malloc(n*sizeof(struct book));
    
    for(int i=0;i<n;i++){
        scanf("%d %s %s %s %d %f",&ptr[i].id,ptr[i].name,ptr[i].author,ptr[i].publisher,&ptr[i].num,&ptr[i].price);
    }
    
    for(int i=0;i<n;i++){
        if(ptr[i].price>500){
            ptr[i].price+=0.1*ptr[i].price;
            printf("%s %.2f\n",ptr[i].name,ptr[i].price);
        }
        else{
            ptr[i].price+=0.05*ptr[i].price;
            printf("%s %.2f\n",ptr[i].name,ptr[i].price);
        }
    }
    
    free(ptr);
    return 0;
}