#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        double t, d;
        double maior=0;
        int i;
        for(i=0;i<n;i++){
            scanf("%lf %lf", &t, &d);
            double vm = d/t;
            if(vm>maior){
                maior = vm;
                printf("%d\n", i+1);
            }
        }
    }
    
    return 0;
}