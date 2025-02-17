/*Create a program that initializes a 2D array (matrix) of integers. 
Use pointers to access and print the elements of the matrix in row-major order.*/
#include<stdio.h>
int main(){
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);
    int arr[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int (*ptr)[100]=arr;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}