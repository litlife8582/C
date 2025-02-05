#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int* ptr=&num;
    scanf("%d",&(*ptr));
    printf("%d",num);
    return 0;
}