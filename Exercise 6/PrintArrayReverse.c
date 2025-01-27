/*Write a program in C to print the elements of an array in
 reverse order using pointers*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rev[100],i,j=0;
    for(i=n-1;i>=0;i--){
        *(rev+j)=*(arr+i);
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*(rev+i));
    }
}