/*Write a program using function to print the following pattern (first n lines) 
* 
* * * 
* * * * *  */
#include<stdio.h>
void pattern(int);
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i/2;j+2){
            printf("*");
        }
        printf("\n");
    }
}
void main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    pattern(n);
}