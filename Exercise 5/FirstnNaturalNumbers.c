/*Write a recursive function to calculate the sum of first ‘n’ natural numbers.*/
#include<stdio.h>
int SumOfNaturalNumbers(int);
int SumOfNaturalNumbers(int n){
    return n + SumOfNaturalNumbers(n-1);
}
void main(){
    int n;
    printf("Enter the number if natural numbers: ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d",n,SumOfNaturalNumbers(n));
}