#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int num;
    char name[50];
    int tamil;
    int eng;
    int chem;
    int maths;
    int phy;
}students;

int main(){
    int n;
    scanf("%d",&n);
    students *ptr=(students *)malloc(n*sizeof(students));
    if(ptr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    float avg[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d %d %d %d",&ptr[i].num,ptr[i].name,&ptr[i].tamil,&ptr[i].eng,&ptr[i].chem,&ptr[i].maths,&ptr[i].phy);
        avg[i]=(ptr[i].tamil+ptr[i].eng+ptr[i].chem+ptr[i].maths+ptr[i].phy)/5.0;
    }
    for(int i=0;i<n;i++){
        printf("%.2f ",avg[i]);
    }
    return 0;
}