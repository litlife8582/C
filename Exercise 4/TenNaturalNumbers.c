/*Write a program to sum first ten natural numbers using while loop.*/
#include<stdio.h>
void main(){
    int sum=0,n=1;
    while(n<=10){
        sum+=n;
        n+=1;
    }
    printf("The sum of first 10 natural numbers is: %d",sum);
}