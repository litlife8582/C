/*We will write a program that generates a random number and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int num=0,c=0;
    srand((unsigned int)time(NULL));
    int randomNumber = rand();
    while(num!=randomNumber){
        printf("Enter the number: ");
        scanf("%d",&num);
        if(num==randomNumber){
            printf("Correct number guessed \n");
            break;
        }
        else if(num>randomNumber){
            printf("Higher number guessed. Guess lower number \n");
        }
        else{
            printf("Lower number guessed. Guess higher number \n");
        }
    c++;
    }
    printf("The number of attempts required: %d",c);
}