#include<stdio.h>
int main(){
    char str1[100],str2[100],merged[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i=0,j=0;
    while(str1[i]!='\0' && str1[i]!='\n'){
        merged[i]=str1[i];
        i++;
    }
    merged[i++]=' ';
    while(str2[j]!='\0' && str2[j]!='\n'){
        merged[i]=str2[j];
        i++;
        j++;
    }
    merged[i]='\0';
    printf("%s \n",merged);
    return 0;
}