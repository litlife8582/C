#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not Anagram");
        return 0;
    } 
    else{
        for(int i=0;i<strlen(str1);i++){
            for(int j=0;j<strlen(str1)-i-1;j++){
                if(str1[j]>str1[j+1]){
                    char temp = str1[j];
                    str1[j] = str1[j+1];
                    str1[j+1] = temp;
                }
            }
        }
        for(int i=0;i<strlen(str2);i++){
            for(int j=0;j<strlen(str2)-i-1;j++){
                if(str2[j]>str2[j+1]){
                    char temp = str2[j];
                    str2[j] = str2[j+1];
                    str2[j+1] = temp;
                }
            }
        }
        if(strcmp(str1,str2)==0) printf("Anagram");
        else printf("Not Anagram");
    }
    return 0;
}