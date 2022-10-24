#include <stdio.h>
#include <math.h>

int main(){
    int tst[100001];
    int k=1;
    int i=0;
    while(k!=0){
        scanf("%d", &k);
        tst[i] = k;
        i++;
    }

    i=0;
    while(tst[i]!=0){
        tst[i] = pow(2,tst[i])-1;
        i++;
    }

    i=0;
    while(tst[i]!=0){
        printf("Teste %d\n%d\n\n", i+1, tst[i]);
        i++;
    }

    return 0;
}
