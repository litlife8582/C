/*Implement a program that takes a string input from the user and uses a pointer
 to reverse the string in place. Print the reversed string.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char* ptr=str;
    char final[100];
    int j=0;
    for(int i=strlen(str);i>=0;i--){
        final[j]=*(ptr+i-1);
        j++;
    }
    final[sizeof(str)]='\0';
    printf("%s",final);
    return 0;
}