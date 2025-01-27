//Write a program in C to add two numbers using pointers in function
#include<stdio.h>
int Add(int* a, int* b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int* ptra=&a;
    int* ptrb=&b;
    printf("Sum of the two numbers: %d \n",Add(ptra,ptrb));
    return 0;
}
int Add(int* a, int* b){
    int sum= *a + *b;
    return sum;
}