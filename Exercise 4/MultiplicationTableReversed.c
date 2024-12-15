/*Write a program to print multiplication table of 10 in reversed order.*/
#include<stdio.h>
void main(){
    int n,upto;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the number upto which the multiplication table is to be printed: ");
    scanf("%d",&upto);
    for(int i=upto;i>=1;i--){
        printf("%d * %d = %d \n",n,i,(n*i));
    }
}