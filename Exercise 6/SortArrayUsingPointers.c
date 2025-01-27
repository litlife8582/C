/* Write a program in C to sort an array using a pointer.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int* ptr=arr;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;    
}