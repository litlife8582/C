#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n* factorial(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("Factorial: %d",factorial(num));
}