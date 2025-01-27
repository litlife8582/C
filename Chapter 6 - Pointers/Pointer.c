#include<stdio.h>
int main(){
    int a=76;
    int* ptra;//declaration
    ptra=&a;//initalization(intializing with the address of the variable)
    char* ptr=NULL;
    printf("The value of a is: %d\n",a);
    printf("The value of a is: %d\n",*ptra);//dereferencing
    printf("The value of address of pointer to a is: %x\n",&ptra);
    printf("The value of integer null pointer is: %c\n",ptr);
    return 0;
}