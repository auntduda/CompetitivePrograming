#include <stdio.h>
#include <math.h>

int main(){
    int v, n, i;
    scanf("%d %d", &v, &n);
    for(i=10;i<=90;i+=10){
        int k = ceil(i/100.0 * v*n);
        printf("%d", k);
        
        if(i==90) printf("\n");
        else printf(" ");
    }

    return 0;
}