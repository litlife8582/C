/*Write a program in C to compute the sum of all elements
 in an array using pointers.*/
#include<stdio.h>
int add(int* arr,int n){
    int sum=0,i=0;
    for(int i=0;i<n;i++){
        sum+= *(arr+i);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",add(arr,n));
    return 0;
}