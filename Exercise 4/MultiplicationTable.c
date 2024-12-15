/*Write a program to print multiplication table of a given number n.*/
#include<stdio.h>
void main(){
    int n,upto;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the number upto which the multiplication table is to be printed: ");
    scanf("%d",&upto);
    for(int i=1;i<=upto;i++){
        printf("%d * %d = %d \n",n,i,(n*i));
    }
}