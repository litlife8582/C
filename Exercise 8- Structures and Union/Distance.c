#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int feet;
    float inch;
}dist;

int main(){
    int n;
    scanf("%d",&n);
    dist* distance=(dist*)malloc(n*sizeof(dist));
    if(distance==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    
    for(int i=0;i<n;i++){
        scanf("%d %f",&distance[i].feet,&distance[i].inch);
    }
    
    int sum_feet=0;
    float sum_inch=0.0;
    for(int i=0;i<n;i++){
        sum_feet+=distance[i].feet;
        sum_inch+=distance[i].inch;
    }
    if(sum_inch>12){
        sum_feet+=sum_inch/12;
        sum_inch=sum_inch-12;
    }
    printf("%d\n",sum_feet);
    printf("%.2f\n",sum_inch);
    return 0;
}