#include <stdio.h>

int main(){
    int n, v, vin=0, vout=0, i;
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &v);
        if(v>=10 && v<=20){
            vin++;
        } else{
            vout++;
        }
    }
    printf("%d in\n", vin);
    printf("%d out\n", vout);

    return 0;
}