#include<stdio.h>
int main(){
    int arr[25],i,n;
    printf("\n\n Pointers:  Store and retrieve elements from an array: \n");
    printf("----------------------------------------------------------\n");
    int *ptr =arr;

    printf("Input the number of elements to store in the array: ");
    scanf("%d",&n);

    printf("Input %d number of elements in the array: \n",n);
    for(i=0;i<n;i++){
        printf("Element %d :",i+1);
        scanf("%d",arr+i);
    }

    printf("The elements you entered are: \n");
    for(int i=0;i<n;i++){
        printf("Element - %d:%d\n",i+1,*ptr++);
    }
    return 0;
}