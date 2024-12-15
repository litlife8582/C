/*Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).*/
#include<stdio.h>
int main(){
    char p;
    float celcius,farenheit;
    printf("Press c to convert farenheit to celcius and f to convert celcius to farenheit \n");
    scanf("%c", &p);
    if(p=='c'){
        printf("Enter the temperature in farenheit: \n");
        scanf("%f", &farenheit);
        celcius=(farenheit-32)*5/9;
        printf("The temperature in celcius: %f",celcius);
    }
    else{
        printf("Enter the temperature in celcius: \n");
        scanf("%f", &celcius);
        farenheit=(celcius*5/9)+32;
        printf("The temperature in farenheit: %f",farenheit);
    }
    return 0;
}