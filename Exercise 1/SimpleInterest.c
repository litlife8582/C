/*Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. */
#include<stdio.h>
void main(){
    double principal,rate;
    int time;
    printf("Enter the principal: ");
    scanf("%lf",&principal);
    printf("Enter the value of rate: ");
    scanf("%lf",&rate);
    printf("Enter the time: ");
    scanf("%i",&time);
    double SimpleInterest=principal*rate*time;
    double total_value=principal+SimpleInterest;
    printf("The Simple Interest on the given principal, rate and time is: %lf \n",SimpleInterest);
    printf("The total value for the sum after given time is: %lf",total_value);
}