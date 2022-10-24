#include <stdio.h>

int main(){
    int i;
    double v;
    for(i=0;i<100;i++){
        scanf("%lf", &v);
        if(v<=10){
            printf("A[%d] = %.1lf\n", i, v);
        }
    }

    return 0;
}