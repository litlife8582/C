#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    //removes newline from fgets
    str1[strcspn(str1,"\n")]=0;
    str2[strcspn(str2,"\n")]=0;
    
    char str[100];
    //merge
    strcat(str,str1);
    strcat(str," ");    
    strcat(str,str2);
    
    printf("%s \n",str);
    return 0;
}