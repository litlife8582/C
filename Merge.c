#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of elements in array 1: ");
    scanf("%d",&m);
    printf("Enter the number of elements in array 2: ");
    scanf("%d",&n);
    int arr1[100],arr2[100];

    //Accepting elements
    printf("Enter the elements of array 1: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in array 2: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    //Merging Arrays
    int arr[100];
    for(int i=0;i<m;i++){
        arr[i]=arr1[i];
    }
    for(int j=0;j<n;j++){
        arr[m+j]=arr2[j];
    }
    int finalarr[100];
    int index=0;

    for(int i=0;i<m+n;i++){
        int flag=0;
        for(int j=0;j<index;j++){
            if(arr[i]==finalarr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            finalarr[index]=arr[i];
            index++;
        }
    }
    printf("Merged array is : ");
    for(int i=0;i<index;i++){
        printf("%d",finalarr[i]);
    }
    return 0;
}