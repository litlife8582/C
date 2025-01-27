#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of array elements in array 1: ");
    scanf("%d",&m);
    printf("Enter the number of array elements in array 2: ");
    scanf("%d",&n);
    int arr1[m],arr2[n];


    //Accepting the elements
    for(int i=0;i<m;i++){      printf("Enter the array element %d: ",(i+1));
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        printf("Enter the array element %d: ",(i+1));
        scanf("%d",&arr2[i]);
    }


    //Merging the arrays
    int merged[m+n];
    for(int i=0;i<m;i++){
        merged[i]=arr1[i];
    }
    for(int j=0;j<n+m;j++){
        merged[m+j]=arr2[j];
    }


    //Eliminating duplicate elements
    int final[m+n];
    int index=0;

    for(int i=0;i<m+n;i++){
        int flag=0;
        for(int j=0;j<index;j++){
            if(merged[i]==final[j]){
                flag=1;
                break;
            }
        }
        if(flag==0) {
            final[index]=merged[i];
            index++;
        }
    }
    for(int i=0;i<index;i++){
        printf("%d \n",final[i]);
    }
    
    //Sorting the array
    for(int i=0;i<index-1;i++){
        for(int j=0;j<index-i-1;j++){
            if(final[j]>final[j+1]){
                int temp=final[j];
                final[j]=final[j+1];
                final[j+1]=temp;
            }
        }
    }
    
    printf("The final sorted array is: \n");
    for(int i=0;i<index;i++){
        printf("%d \n",final[i]);
    }
    return 0;
}

