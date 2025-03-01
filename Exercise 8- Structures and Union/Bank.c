#include<stdio.h>
#include<stdlib.h>

struct Customer{
  char name[50];
  int acc;
  float bal;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Customer* ptr=(struct Customer*)malloc(n*sizeof(struct Customer));
    
    for(int i=0;i<n;i++){
        scanf("%s %d %f",ptr[i].name,&ptr[i].acc,&ptr[i].bal);    
    }
    
    printf("Customers with balance less than Rs.200:\n");
    for(int i=0;i<n;i++){
        if(ptr[i].bal<200){
            printf("%s ",ptr[i].name);
        }
    }
    
    for(int i=0;i<n;i++){
        if(ptr[i].bal>1000){
            ptr[i].bal+=0.03*ptr[i].bal;
            printf("\nUpdated balance of %s: Rs. %.2f",ptr[i].name,ptr[i].bal);
        }
    }
    
    return 0;
}