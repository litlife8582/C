/* Write a C program to calculate area of a rectangle: 
    a. Using hard coded inputs. 
    b. Using inputs supplied by the user. */

#include<stdio.h>
int main(){
    float l,b;
    printf("Enter the length:\n");
    scanf("%f", &l);
    printf("Enter the breadth:\n");
    scanf("%f", &b);
    float area=l*b;
    printf("Area= %.2f\n ",area);
    return 0;
}