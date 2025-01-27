#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&ch);
    int i=0;
    while(str[i]!='\0' && str[i]!='\n'){
        if(str[i]==ch){
            printf("%d \a",i);
            break;
        }
        i++;
    }
    return 0;
}