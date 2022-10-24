#include <stdio.h>
#include <math.h>

int main(){
    int xf, yf, xi, yi, vi, r1, r2;
    while(scanf("%d %d %d %d %d %d %d", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF){
        double x = (xf-xi)*(xf-xi), y=(yf-yi)*(yf-yi);
        if(sqrt(x+y)+vi*1.5>r1+r2){
            puts("N");
        } else{
            puts("Y");
        }
    }
    
    return 0;
}