#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    long long n;
    while(scanf("%lld", &n) != EOF){
        printf("%.lf\n", ceil(n/100.0));
    }

    return 0;
}