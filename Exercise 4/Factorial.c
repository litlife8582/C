/*Write a program to calculate the factorial of a given number using a for loop.*/
#include<stdio.h>
void main(){
    int num,factorial=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        factorial*=num;
        num--;
    }
    printf("The factorial of the number is: %d",factorial);
}