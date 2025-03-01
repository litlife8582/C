#include<stdio.h>
#include<stdlib.h>
struct Student{
    struct roll_no{
        int roll;
    }r;
    struct name{
        char name[50];
    }n;
    struct marks{
        float marks;
    }m;
}s;

int main(){
    int n;
    scanf("%d",&n);
    struct Student* ptr=(struct Student*)malloc(n*sizeof(struct Student));
    
    if(ptr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&ptr[i].r.roll,ptr[i].n.name,&ptr[i].m.marks);
    }
    
    printf("Details of all students\n");
    for(int i=0;i<n;i++){
        printf("Student %d\n",(i+1));
        printf("Roll no: %d\n",ptr[i].r.roll);
        printf("Name: %s\n",ptr[i].n.name);
        printf("Marks: %.2f\n",ptr[i].m.marks);
    }
    
    
    free(ptr);
    return 0;
}