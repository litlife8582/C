#include<stdio.h>
int main(){
    int arr[5]={5,2,3,4,5};
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+2));
    *(arr+1)=4;
    *(arr+2)=13;
    *arr=10;
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+2));
    return 0;
}