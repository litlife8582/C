#include<stdio.h>
float salary(int grade,float hours){
    float rate,overtime,pay;
    switch(grade){
        case 1:
        rate=100.00;
        overtime=125.00;
        break;

        case 2:
        rate=200.00;
        overtime=250.00;
        break;

        case 3:
        rate=300.00;
        overtime=375.00;
        break;

        default:
        printf("INVALID GRADE \n");
        return -1;
    }
    
    if(hours<3)
        pay=0;
    else if(hours<=6)
        pay=hours*(rate*0.5);
    else if(hours<=8) pay=hours*rate;
    else if(hours<=12) pay=(8*rate)+(hours-8)*overtime;
    else {
        printf("Hours exceeded\n");
        return -1;
    }
    return pay;
}
int main(){
    int grade;
    printf("Enter the employee grade: ");
    scanf("%d",&grade);
    float hours;
    printf("Enter the number of hours worked :");
    scanf("%f",&hours);
    
    float pay=salary(grade,hours);
    if (pay !=-1){
        printf("The pay of the employee: %.2f",pay);
    }
    else{
        printf("ERROR");
    }
    return 0;
}