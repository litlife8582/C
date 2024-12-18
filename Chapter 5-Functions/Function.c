#include<stdio.h>
void sum(int,int);
void sum(int x,int y){
    printf("Sum is: %d",(x+y));
}
void main(){
    int a=1,b=2;
    sum(a,b);
}    