/*Write a function to convert Celsius temperature into Fahrenheit. */
#include<stdio.h>
void temp(char);
void temp(char p){
    float temp_initial,temp_final;
    if(p=='c'){
        printf("Enter the temperature in farenheit: \n");
        scanf("%f", &temp_initial);
        temp_final=(temp_initial-32)*5/9;
        printf("The temperature in celcius: %f",temp_final);
    }
    else if(p=='f'){
        printf("Enter the temperature in celcius: \n");
        scanf("%f", &temp_initial);
        temp_final=(temp_initial*5/9)+32;
        printf("The temperature in farenheit: %f",temp_final);
    }
}
void main(){
    char p;
    float celcius,farenheit;
    printf("Press c to convert farenheit to celcius and f to convert celcius to farenheit \n");
    scanf("%c", &p);
    temp(p);
}