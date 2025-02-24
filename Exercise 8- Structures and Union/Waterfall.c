#include<stdio.h>
struct Waterfall{
    double W,H,D;
    struct TotalFlow{
        double total,surface;
    }t;
}w;
int main(){
    scanf("%lf",&w.W);
    scanf("%lf",&w.H);
    scanf("%lf",&w.D);
    w.t.total=w.W*w.H*w.D;
    w.t.surface=2*((w.W*w.H)+(w.W*w.D)+(w.H*w.D));
    printf("%.2lf cubic meters\n",w.t.total);
    printf("%.2lf square meters\n",w.t.surface);
    return 0;
}
