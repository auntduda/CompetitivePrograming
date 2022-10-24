#include <stdio.h>
#include <math.h>

int main(){
    double r1, x1, y1, r2, x2, y2;

    while(scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){

        double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

        if(d <= r1*r1 && sqrt(d)+r2 <= r1) printf("RICO\n");
        else printf("MORTO\n");
    }
    
    return 0;
}