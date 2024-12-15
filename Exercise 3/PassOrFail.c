/* Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */
#include<stdio.h>
void main(){
    int marks,sum=0;
    for(int i=1;i<=3;i++){
        printf("Enter the marks in subject %d: ",i);
        scanf("%i",&marks);
        sum+=marks;
        if(marks>=33){
            printf("Passed in subject %d \n",i);
        }
        else{
            printf("Failed in subject %d \n",i);
        }
    }
    double avg=(double)sum/3;
    if(avg>=40){
        printf("Overall Passed");
    }
    else{
        printf("Overall Failed");
    }
}