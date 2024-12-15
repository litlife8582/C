/* Write a program to check whether a given number is prime or not using loops.*/
#include<stdio.h>
void main(){
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++) if(num%i==0) count++;
    if (count>0) printf("Not prime");
    else printf("Prime");
}