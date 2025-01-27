/*Write a program in C to count the number of vowels and
 consonants in a string using a pointer.*/
#include<stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char* ptr=str;
    int vowel=0, consonant=0;
    int* ptrv;
    int* ptrc;
    ptrv=&vowel;
    ptrc=&consonant;
    int i=0;
    while(*(str+i)!='\0'){
        if(*(str+i)=='A' ||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U') (*ptrv)++;
        else if(*(str+i)=='a' ||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u') (*ptrv)++;
        else (*ptrc)++;
        i++;
    }
    printf("The no of vowels in the string are: %d\n",*ptrv);
    printf("The no of consonents in the string are: %d\n",*ptrc);
    return 0;
}