/*Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.*/
#include<stdio.h>
#include<math.h>
int main(){
    float radius,height;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&radius);
    printf("Enter the height of the cylinder: \n");
    scanf("%f",&height);
    float area_circle= 3.14 * pow(radius,2);
    float volume_cylinder= area_circle* height;
    printf("Area of the circle is: %f \n", area_circle);
    printf("Volume of the cylinder is: %f", volume_cylinder);
    return 0;
}