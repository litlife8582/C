/* Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab    Tax                    
2.5 – 5.0L     5%                          
5.0L - 10.0L   20%                       
Above 10.0L    30%                     
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
#include<stdio.h>
void main(){
    double income,incometax;
    printf("Enter the income: ");
    scanf("%lf",&income);
    if(income<250000){
        printf("No tax\n");
    }
    else if(income<500000){
        incometax=(income-250000)*5/100;
    }
    else if(income<=1000000){
        incometax=(500000*5/100)+((income-250000)*20/100);
    }
    else{
        incometax=(500000*5/100)+(500000*20/100)+((income-1000000)*30/100);
    }
    printf("The income tax is: %lf",incometax);
}