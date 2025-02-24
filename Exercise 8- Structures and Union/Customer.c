#include<stdio.h>
#include<stdlib.h>
struct Customer{
  char name[50];
  int acc;
  float accbal;
};

void printCustomersWithLowBalance(char name[50]){
    printf("%s\n",name);
}
 
void addBalanceForHighBalanceCustomers(char name[50],float accbal){\
    float inc=accbal+100;
    printf("%s Rs.%.2f\n",name,inc);
}

int main(){
    int n;
    scanf("%d",&n);
    struct Customer *ptr=(struct Customer*)malloc(n*sizeof(struct Customer));
    if(ptr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    
    for(int i=0;i<n;i++){
        scanf("%s %d %f",ptr[i].name,&ptr[i].acc,&ptr[i].accbal);
    }
    
    int c=0;
    printf("Customers: ");
    for(int i=0;i<n;i++){
        if(ptr[i].accbal<200){
            c++;
            
            printCustomersWithLowBalance(ptr[i].name);
        }
    }
    if(c==0){
        printf("None\n");
    }
    
    c=0;
    printf("Incremented balance: ");
    for(int i=0;i<n;i++){
        if(ptr[i].accbal>1000){
            c++;
            addBalanceForHighBalanceCustomers(ptr[i].name,ptr[i].accbal);
        }
    }
    if(c==0){
        printf("None\n");
    }
    
    return 0;
}