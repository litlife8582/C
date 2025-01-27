#include<stdio.h>
void main(){
    int radius;
    float area,perimeter;
    printf("\n Enter radius of a circle: ");
    scanf("%d",&radius);
    circleparams(radius,&area,&perimeter);
    printf("\n Circle Area: %f",area);
    printf("\n Circle Perimeter: %f",perimeter);
}
void circleparams(int cradius,float *carea,float *cperimeter){
    *carea=3.124*cradius*cradius;
    *cperimeter=2*3.14*cradius;
}