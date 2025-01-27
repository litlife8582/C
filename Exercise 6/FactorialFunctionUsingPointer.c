/*Write a program in C to find the factorial of a given
 number using pointers in function.*/
#include<stdio.h>
int factorial(int* ptr){
    if(*ptr==0 || *ptr==1) return 1;
    int temp=*ptr-1;
    return *ptr * factorial(&temp);
}
int main(){
    int num=0;
    scanf("%d",&num);
    int* ptr=&num;
    printf("%d",factorial(ptr));
    return 0;
}

