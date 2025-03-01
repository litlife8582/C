#include<stdio.h>
#include<stdlib.h>

struct CustomerData{
    int customerID[50];    
    double dataUsed;
    double planLimit;
};

double calculateFee(double du, double pl){
    double ac=(du-pl)*2;
    return ac;
}

int main(){
    int n;
    scanf("%d",&n);
    struct CustomerData* ptr=(struct CustomerData*)malloc(n * sizeof(struct CustomerData));
    
    for(int i=0;i<n;i++){
        scanf("%d %lf %lf",&ptr[i].customerID,&ptr[i].dataUsed,&ptr[i].planLimit);
    }
    
    int c=0;
    double totaldu=0,totalpl=0;
    for(int i=0;i<n;i++){
        totaldu+=ptr[i].dataUsed;
        totalpl+=ptr[i].planLimit;
        if(ptr[i].dataUsed>ptr[i].planLimit){
            double additionalCharges=calculateFee(ptr[i].dataUsed,ptr[i].planLimit);
            printf("%d %.2lf\n",*ptr[i].customerID,additionalCharges);
            c++;
        }
    }
    if(c==0){
        printf("No charges\n");
    }
    
    printf("Total Data Used: %.2lf GB\n",totaldu);
    printf("Total Plan Limit: %.2lf GB\n",totalpl);
    
    free(ptr);
    
    return 0;
}