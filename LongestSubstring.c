#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int size=0,finalsize=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            size++;
        }
        else{
            if(size>finalsize){
                finalsize=size;
            }
            size=0;
        }
    }
    if(size>finalsize){
        finalsize=size;
    }
    printf("%d",finalsize);
    return 0;
}   