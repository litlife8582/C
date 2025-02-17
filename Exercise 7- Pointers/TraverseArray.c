#include<stdio.h>
int main(){
    int arr[100];
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    int* ptr=arr;

    for(int i=0;i<num;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}