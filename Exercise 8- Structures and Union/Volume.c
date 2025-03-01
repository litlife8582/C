#include<stdio.h>
#include<stdlib.h>

struct Point3D{
    double x,y,z;
};

struct GeometryCalculator{
    double volume;
};

struct Sphere{
    struct Point3D p;
    struct GeometryCalculator g;
    double R;
};

struct Cylinder{
    struct Point3D p;
    struct GeometryCalculator g;
    double r,h;
};


int main(){
    struct Sphere s;    
    struct Cylinder c;
    
    scanf("%lf %lf %lf",&s.p.x,&s.p.y,&s.p.z);
    scanf("%lf",&s.R);
    scanf("%lf %lf %lf",&c.p.x,&c.p.y,&c.p.z);
    scanf("%lf %lf",&c.r,&c.h);
    
    s.g.volume=4*3.14*(s.R)*(s.R)*(s.R)/3;
    c.g.volume=3.14*(c.r)*(c.r)*(c.h);
    
    printf("Sphere's Volume: %.2lf cubic units\n",s.g.volume);
    printf("Cylinder's Volume: %.2lf cubic units\n",c.g.volume);
    
    return 0;
}