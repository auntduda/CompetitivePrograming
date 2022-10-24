#include <stdio.h>

int main(){
    int i, val=0;
    double n;
    for(i=0;i<6;i++){
        scanf("%lf", &n);
        if(n>0){
            val++;
        }
    }
    printf("%d valores positivos\n", val);
    
    return 0;
}