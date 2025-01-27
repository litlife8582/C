#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    int fibonacci;
    printf("0,1");
    for(int i=0;i<n;i++){\
        printf(",");
        fibonacci=a+b;
        a=b;
        b=fibonacci;
        printf("%d",fibonacci);
    }
    return 0;
}