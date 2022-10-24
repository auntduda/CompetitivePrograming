#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    while(scanf("%lld", &n) != EOF){
        printf("%.lf\n", ceil(n/100.0));
    }

    return 0;
}