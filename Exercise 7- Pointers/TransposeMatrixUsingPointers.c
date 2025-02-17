/*Write a program that takes a square matrix as input and uses pointers to
compute its transpose. Print both the original and transposed matrices.*/
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int (*ptr)[100]=arr;
    //printing the original array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    
    int final[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            final[j][i]=*(*(ptr+i)+j);
        }
    }
    
    int (*fptr)[100]=final;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",*(*(fptr+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}