/*Write a program to check whether a number is divisible by 97 or not.*/
#include<stdio.h>
void main(){
    int num;
    printf("Enter the number: ");
    scanf("%i",&num);
    if(num%97==0){
        printf("Divisible by 97");
    }
    else{
        printf("Not divisible by 97");
    }
}