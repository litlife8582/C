#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[100];
    int arr2[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    int* ptr1=arr1;
    int* ptr2=arr2;

    int arr[100];
    for(int i=0;i<n;i++){
        arr[i]=*(ptr1+i);
    }
    for(int i=0;i<m;i++){
        arr[i+n]=*(ptr2+i);
    }

    int* ptr=arr; 

    for(int i=0;i<n+m;i++){
        for(int j=0;j<n+m-i-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    
    for(int i=0;i<m+n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}