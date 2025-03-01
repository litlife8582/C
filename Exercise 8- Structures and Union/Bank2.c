#include<stdio.h>
#include<stdlib.h>

struct customer{
  int acc;
  char name[50];
  char addr[50];
  char dob[50];
  float depo;
  float with;
  float bal;
};



int main(){
    int n;
    scanf("%d",&n);
    struct customer* ptr= (struct customer*)malloc(n* sizeof(struct customer));
    
    for(int i=0;i<n;i++){
        scanf("%d %s %s %s %f",&ptr[i].acc,ptr[i].name,ptr[i].addr,ptr[i].dob,
        &ptr[i].depo);
        ptr[i].bal=ptr[i].depo;
    }
    
    int choice;
    int depo=0,withd=0;
    scanf("%d",&choice);
    int accno;
    
    switch(choice){
        case 1:
            scanf("%d",&accno);
            for(int i=0;i<n;i++){
                if(ptr[i].acc==accno){
                    printf("%d %s %s %s %.2f %.2f %.2f",ptr[i].acc,ptr[i].name,ptr[i].addr,ptr[i].dob,ptr[i].depo,ptr[i].with,ptr[i].bal);
                }
            }
            break;
            
        case 2:
            scanf("%d %d",&accno,&depo);
            for(int i=0;i<n;i++){
                if(ptr[i].acc==accno){
                    ptr[i].depo=depo;
                    ptr[i].bal+=ptr[i].depo;
                }
            }
            printf("Amount Deposited Successfully!");
            break;
            
        case 3:
            scanf("%d %d",&accno,&withd);
            for(int i=0;i<n;i++){
                if(ptr[i].acc==accno){
                    if(ptr[i].bal>withd){
                        ptr[i].with=withd;
                        ptr[i].bal-=ptr[i].with;
                        printf("Amount Withdrawn Successfully!");
                    }
                    else{
                        printf("Minimum Balance of Rs.1000 should be maintained");
                    }
                }
            }
            
            break;
            
        case 4:
            printf("%-10s %-20s %-15s %-12s %-10s %-12s %-10s\n","Account No.","Customer Name",
                "Address","Date of Birth","Deposits","Withdrawal","Balance");
            for(int i=0;i<n;i++){
                printf("%-10d %-20s %-15s %-12s %-10.2f %-12.2f %-10.2f\n",ptr[i].acc,ptr[i].name,
                ptr[i].addr,ptr[i].dob,ptr[i].depo,ptr[i].with,ptr[i].bal);
            }
        }
    return 0;
}
