#include<stdio.h>
int fibonacci(int n){
    if(n==0 || n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",fibonacci(num));
    return 0;
}