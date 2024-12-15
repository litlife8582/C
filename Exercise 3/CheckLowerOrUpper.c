/* Write a program to determine whether a character entered by the user is 
lowercase or not.*/
#include<stdio.h>
void main(){
    char ch;
    printf("Enter the charecter :");
    scanf("%c",&ch);
    int c=ch;
    if(c>=65 && c<=90){
        printf("Uppercase charecter");
    }
    else{
        printf("Lowercase charecter");
    }
}