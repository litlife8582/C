/*Write a program in C to find maximum number from an
 array using pointers*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=*arr;
    int j;
    for(j=0;j<n;j++){
        if(min>*(arr+j)){
            min=*(arr+j);
        }
    }
    printf("%d",min);
}