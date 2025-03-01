#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Animal{
  char name[50];
  int count;
  char location[50];
};

int main(){
    int n;
    scanf("%d",&n);
    struct Animal* ptr=(struct Animal*)malloc(n * sizeof(struct Animal));

    for(int i=0;i<n;i++){
        scanf("%s %d %s",ptr[i].name,&ptr[i].count,ptr[i].location);
    }
    
    int count=0;
    
    for(int i=0;i<n;i++){
        if(strcmp(ptr[i].location,"India")==0){
            printf("%s %d %s\n",ptr[i].name,ptr[i].count,ptr[i].location);
            count++;
        }if(strcmp(ptr[i].location,"india")==0){
            printf("%s %d %s\n",ptr[i].name,ptr[i].count,ptr[i].location);
            count++;
        }
        if(strcmp(ptr[i].location,"INDIA")==0){
            printf("%s %d %s\n",ptr[i].name,ptr[i].count,ptr[i].location);
            count++;
        }
    }
    
    if(count==0){
        printf("No animals found in India");
    }
    
    return 0;
}