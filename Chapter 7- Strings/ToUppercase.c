#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0'){
        if((int)str[i]>=97 && (int)str[i]<=122){
            str[i]=(char)((int)str[i]-26-6);
        }
        i++;
    }
    printf("%s",str);
    return 0;
}