#include<stdio.h>

int main() {
    int n, i;
    double v, maior;
    while(scanf("%d", &n) != EOF){
        scanf("%lf", &maior);
        for(i=1;i<n;i++){
            scanf("%lf", &v);
            if(v<maior) maior=v;
        }
        printf("%.2lf\n", maior);
    }
    
    return 0;
}