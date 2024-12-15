/*Write a program to find greatest of four numbers entered by the user.*/
#include<stdio.h>
void main(){
    int num,greatest=0;
    for(int i=0;i<=3;i++){
        printf("Enter the number: ");
        scanf("%d",&num);
        if(num>greatest){
            greatest=num;
        }
    }
    printf("The greatest number is: %d",greatest);
}