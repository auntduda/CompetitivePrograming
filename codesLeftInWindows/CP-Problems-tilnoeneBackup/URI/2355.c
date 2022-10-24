#include <stdio.h>
#include <math.h>

int main(){
    double n;
    while(scanf("%lf", &n) != EOF){
        if(n == 0) break;
        
        printf("Brasil %.0lf x Alemanha %.0lf\n", floor(n/90.0), ceil((7*n)/90.0));
    }
    
    return 0;
}