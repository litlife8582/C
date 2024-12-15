/*Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). */
#include<stdio.h>
void main(){
    int n,upto,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the number upto which the multiplication table is to be printed: ");
    scanf("%d",&upto);
    for(int i=1;i<=upto;i++){
        sum+=(i*upto);
    }
    printf("Sum of the numbers in the multiplication table of 8 is: %d",sum);
}