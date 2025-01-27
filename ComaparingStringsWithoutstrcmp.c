#include<stdio.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    
    int i=0,flag=1;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]=='\n'){
            str1[i]='\0';
            break;
        }
        if(str2[i]=='\n'){
            str2[i]='\0';
            break;
        }
        if(str1[i]!=str2[i]){
            flag=0;
        }
        i++;
    }

    if(flag==1) printf("The strings are equal");
    else printf("The strings are not equal");
    
    return 0;
}