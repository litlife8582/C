/*Write a program using function to find average of three numbers.  */
#include<stdio.h>
void average(int,int,int);
void average(int a,int b,int c){
    double average=(double)(a+b+c)/3;
    printf("The average of the three numbers is: %lf",average);
}
void main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average(a,b,c);
}